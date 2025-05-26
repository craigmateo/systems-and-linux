# Module 5: Linux User Management

### Overview
This module introduces the core concepts of **user authentication** and **access control** in Linux systems. It explains how to manage **users and groups** locally and at the **enterprise level** using client/server authentication models. You’ll also learn how Linux handles **password encoding**, and how to use essential **commands** for user and group management.

Once you have reviewed Modules 1 through 5, you will complete your **Midterm Exam**.

---

### 🔑 Learning Outcomes
By the end of this module, you should be able to:

- Understand **authentication principles** and **access control**
- Describe enterprise **client/server authentication models**
- Demonstrate how **passwords are encoded and stored** in Linux
- Understand how **users and groups are managed**
- Use key **Linux commands** for user and group management

---

### 📘 Key Terms and Concepts

- **Authentication**  
  The process of verifying a user or device identity.

- **Access Control**  
  A method of regulating who or what can view or use resources.

- **User Identifier (UID)**  
  A unique numerical identifier for a user.

- **Group Identifier (GID)**  
  A unique numerical identifier for a group of users.

- **User Rights**  
  Permissions granted to individual users.

- **Owner Rights**  
  Permissions granted to the file owner.

- **Group Rights**  
  Permissions granted to a group of users.

---

## Security

User security in Linux can be divided into two main categories:

### 🔐 Authentication
Ensures that no one can access the system without first proving they have the proper entry rights.

### 🛡️ Access Control
Provides a mechanism to verify whether a user has permission to access a particular object and restricts access when necessary.

## Authentication

Authentication in Unix/Linux traditionally uses password files, where a user's password is transformed using a **salt** and a **one-way encryption function**, and stored in the `/etc/shadow` file.

### 🔑 Password Mechanism

- **Password File**: `/etc/passwd` — readable by anyone; does not contain encrypted passwords.
- **Shadow File**: `/etc/shadow` — contains encrypted passwords and is readable only by root.
- **Password Format Example**:  

    user1:/3GJllg1o4152:11009:0:99999:7:::


- Users can manage their own authentication information using tools like `passwd`.

### 🔒 Security Considerations

- Legacy systems had limitations:
- Max password length of 8 characters.
- Low number of salt values.
- Susceptibility to dictionary attacks.
- Improvements:
- Support for longer passwords.
- Stronger encryption methods.
- Restricted password visibility.
- Time-based login restrictions.

### 🔌 PAM (Pluggable Authentication Modules)

- A **flexible and modular system** for authentication.
- Uses a **shared library** and a **system-wide configuration file**.
- Allows dynamic loading of authentication modules.
- Modules support:
- Authentication methods
- Account restrictions
- Session setup
- Password updates

### 🖥️ Authenticating Servers (Enterprise-Level)

- **Client/server authentication model** enables users to log into any system within an organization using the same credentials.
- Common protocols and tools:
- **LDAP** (Lightweight Directory Access Protocol)
- **Kerberos**
- Common systems:
- **Microsoft Active Directory (AD)** (for Windows environments)
- **FreeIPA** or **OpenLDAP** (for Linux/Unix environments)

These systems provide centralized, scalable authentication across networks.

## Access Control

Access control in Unix/Linux is handled using **numeric identifiers**:

- **UID (User Identifier)**: Uniquely identifies a user or set of access rights.
- **GID (Group Identifier)**: Identifies a group of users who share access rights.

### 🔐 Access Rights and Objects

- Every **object** (e.g., files, shared memory, semaphores) has:
  - A single UID
  - A single GID
- Every **process** has:
  - One UID (real)
  - One or more GIDs

### 📁 File Access Permissions

- Access permissions are divided into:
  - **Owner (user)**
  - **Group**
  - **Others (world)**

- Access modes:
  - `r` (read)
  - `w` (write)
  - `x` (execute)

- The system uses a **protection mask** to define permissions.

### ⚠️ Root UID

- The **root** user (UID 0) bypasses all normal access checks.
- Root can:
  - Read/write any file
  - Access physical memory
  - Open restricted network sockets

### 🧰 Setuid Mechanism

- Allows a program to run with privileges of the file's owner, not the user running it.
- Key concepts:
  - **Real UID**: User running the program
  - **Effective UID**: Owner of the executable file
- Example: `lpr` can access print queues even if the user can't.

### 🔄 Enhancements in Linux

#### ✅ Saved UID (POSIX)

- Allows a process to:
  - Drop privileges temporarily (set EUID = RUID)
  - Reacquire them later (restore EUID from saved UID)
- Avoids unsafe swapping of real and effective UIDs.

#### 🎯 fsuid and fsgid

- Allow **partial rights delegation**.
- Example use case: Server accesses files for a user **without fully becoming that user**.
- Prevents user from suspending or terminating the server.

### 🔗 Passing File Descriptors

- Processes can share access to open files over **local sockets**.
- A client can send a **file descriptor** to a server:
  - Grants limited access to specific files
  - Avoids broader access to the user's files
- Example: A print client sends only the files to print, not the whole user directory.

## Linux: Adding Users

The `useradd` command is used to create a new user account.

### 🔧 Basic Syntax

    useradd [options] username

- By default, Linux also creates a **group** with the same name as the username.

---

### 🧰 Common `useradd` Options

| Option | Description |
|--------|-------------|
| `-d`   | Define the user's **home directory** |
| `-g`   | Set the **initial group** (must already exist) |
| `-G`   | Set **supplementary groups** (comma-separated list) |
| `-c`   | Add **comments**, e.g., full name |
| `-N`   | Do **not** create a group with the same name as username; add user to default group (e.g., `users`, GID=100) |
| `-e`   | Set **account expiration date** in `YYYY-MM-DD` format |
| `-s`   | Define **login shell** |
| `-m`   | Create the **home directory** (if it doesn't exist) and copy default files from `/etc/skel` |
| `-D`   | Display or modify **default useradd values** |

---

### 🔍 Checking Defaults

    useradd -D

Displays default settings used when creating a user.

---

### 🧪 Example

    useradd -c "Mike Smith" -d /home/msmith -m \
      -g faculty -G computer,staff -e 2019-01-01 \
      -s /bin/bash msmith

This creates user `msmith` with:

- Full name: **Mike Smith**
- Home directory: `/home/msmith`
- Home directory created and initialized from `/etc/skel`
- Primary group: `faculty`
- Supplementary groups: `computer`, `staff`
- Account expiration date: **January 1, 2019**
- Login shell: `/bin/bash`

## Linux: Modifying Users

The `usermod` command is used to modify attributes of an existing user.

### 🔧 Basic Syntax

    usermod [options] username

---

### 📂 Files Used and Affected

- `/etc/passwd` – User account information
- `/etc/shadow` – Secure account information
- `/etc/group` – Group account information
- `/etc/gshadow` – Secure group account information
- `/etc/login.defs` – Shadow password suite configuration

---

### 🧰 Useful `usermod` Options

| Option | Description |
|--------|-------------|
| `-d`   | Modify the user's **home directory** |
| `-g`   | Modify the **primary group** (group must exist) |
| `-G`   | Add **supplementary groups** the user should belong to |
| `-c`   | Add or change **comments**, e.g., full name |
| `-e`   | Set **account expiration date** (format: `YYYY-MM-DD`) |
| `-s`   | Modify **login shell** |
| `-m`   | Create home directory if it does not exist and copy default files from `/etc/skel` |
| `-L`   | **Lock** the user account (disables password login) |

---

### 🧪 Example

    usermod -d /home/andrewHome andrew

This modifies user `andrew` by changing the home directory to `/home/andrewHome`.

## Linux: Deleting Users

The `userdel` command removes a user from the system.

### 🔧 Basic Syntax

    userdel [options] username

---

### 🧰 Useful Option

| Option | Description |
|--------|-------------|
| `-r`   | Remove the user’s **home directory** and all files contained within it |

---

### 🧪 Example

    userdel user2

This command deletes the entries of `user2` from `/etc/passwd` and `/etc/shadow`, but **does not delete** the user’s home directory or files.

## Linux Groups

Groups are a simple mechanism for allowing a “group” of users with common access requirements to have access capabilities which, individually, they do not have.

As such, users are generally associated to group(s) based on an identified need to access information they cannot access as a user alone. This is generally done by administrators.

All group information is maintained in the `/etc/group` and `/etc/gshadow` files on the system.

The format of these files is different from the `/etc/passwd` file.

### Sample entry in `/etc/group`:

    user1:x:500:user2,user3

Users belong to a group called the **initial (primary) group**, which is generally set up by administrators when the account is created. The user does not need to do anything to belong to this group; it is automatically associated with the user when they log into the system.

The initial group’s GID is listed in the `/etc/passwd` file. A user can also belong to several groups (**supplementary groups**) at the same time and switch between them for access purposes.

## Linux Group Management

The following are commands used to manage groups on a system:

- `groupadd`  
  Create a new group

- `groupdel`  
  Remove a group

- `groupmod`  
  Modify a group

### Options for groupmod:

- `-g gid`  
  Specify a new group ID

- `-n groupname`  
  Change the group name

### Other useful commands:

- `groups username`  
  Displays which groups the specified user currently belongs to

- `newgrp groupname`  
  Change the effective group ID to a new group the user already belongs to during the login session.  
  If the group has a password and the user is not a member, they will be prompted for the group password to switch.

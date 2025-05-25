# Module 10: Secondary Storage Devices


## Overview
This module introduces secondary storage devices, focusing on different types of hard drives available for various purposes. It compares their advantages and disadvantages. The module also covers storage virtualization through partitioning, explains jumper modes, and discusses file systems, particularly FAT and NTFS.

You will explore the memory storage aspect of computer architecture, learn about commercially available hard drives, and understand jumpers, file systems, and partitioning. A video demonstration shows how to perform partitioning on Windows. The module also covers the benefits and challenges of hard drive partitioning.

### Learning Outcomes

By the end of this module, you will be able to:

- Explain the basics of secondary memory storage in modern computers  
- Identify different types of hard drives and their specifications  
- Understand storage device virtualization  
- Learn about FAT and NTFS file systems  
- Understand the advantages and challenges of hard drive partitioning  
- Perform hard drive partitioning on Windows OS  

### Key Terms

- **Hard Drive:** Electromechanical storage devices using magnetic storage on fast rotating disks.  
- **Hard Drive Partitioning:** Creating virtual segments on a hard drive so each partition can be managed separately.

## Types of Hard Drives

### Enterprise Class Hard Drives
- **Pros:** Almost 100% uptime, very reliable.  
- **Cons:** Expensive, require high data integrity, data loss can occur easily.

### Desktop Hard Drives
- Designed for about 25% uptime daily.  
- Inexpensive and can quickly restore data from backups to prevent data loss.

### SATA (Serial Advanced Technology Attachment)
- Has largely replaced PATA (Parallel ATA or EIDE).  
- More efficient, faster, and thinner than PATA.

### SCSI (Small Computer System Interface)
- Similar to SATA in speed.  
- Uses a controller device to manage communication between motherboard and hard drive.

### Solid State Drives (SSD)
- Use semiconductors instead of rotating disks.  
- Faster and more reliable than traditional HDDs.  
- Higher cost.

### Usage Types
- **Internal Hard Drives:** Installed inside the computer, usually hold system files.  
- **External Hard Drives:** Portable, mainly used for backup or less frequently accessed data.

### Jumpers
- Small electronic devices to change internal circuitry of hard drives.  
- Set drive modes (master or slave).  
- Control transfer rates (e.g., SATA-150 or SATA-300).

## Hard Drive Partitioning

Partitioning, also called disk slicing, is the process of creating one or more virtual partitions on a hard drive. Each partition is treated by the operating system as a separate physical drive. Partitioning is a form of virtualization.

- **Tools:** Windows provides a partition editor in System Administrators for creating, deleting, or resizing partitions.
- **Advantages:**
  - Facilitates better data management by separating file systems from user data.
  - Protects data during OS re-installation.
  - Makes backups easier; backups can be stored on the same physical drive.
- **Challenges:** Properly sizing partitions depends on storage needs and can be difficult.

A video tutorial on partitioning in Windows 10 is available (5:36 minutes).

---

## File Systems

File systems organize and label files to enable identification and retrieval, similar to addressing or indexing systems.

### Popular File Systems

- **File Allocation Table (FAT):**  
  - Supported by Windows.  
  - Simple and reliable, originally designed for floppy disks but also used for hard drives.  
  - Limited performance compared to modern systems.

- **New Technology File System (NTFS):**  
  - Default file system for Windows.  
  - Improved features over FAT.  
  - Supported by macOS and Linux as well.

There is a video with additional information about file systems.

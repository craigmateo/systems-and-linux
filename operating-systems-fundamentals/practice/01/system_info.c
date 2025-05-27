#include <stdio.h>       // For file I/O (fopen, fgets, printf, perror)
#include <stdlib.h>      // For general utilities (not used heavily here, but good practice)
#include <sys/utsname.h> // For uname system call
#include <string.h>  // <-- Required for strncmp()

// Function to read and print CPU model name from /proc/cpuinfo
void print_cpu_info() {
    FILE *fp = fopen("/proc/cpuinfo", "r"); // Open /proc/cpuinfo for reading
    if (!fp) {
        perror("Could not open /proc/cpuinfo"); // Print error if file couldn't be opened
        return;
    }

    char line[256]; // Buffer to hold each line read from the file
    while (fgets(line, sizeof(line), fp)) {
        // Look for the line that starts with "model name"
        if (strncmp(line, "model name", 10) == 0) {
            printf("CPU: %s", line + 13); // Print the CPU model (offset to skip label and ":")
            break; // Exit loop after finding first match
        }
    }

    fclose(fp); // Close the file
}

// Function to read and print total memory from /proc/meminfo
void print_mem_info() {
    FILE *fp = fopen("/proc/meminfo", "r"); // Open /proc/meminfo
    if (!fp) {
        perror("Could not open /proc/meminfo");
        return;
    }

    char line[256];
    while (fgets(line, sizeof(line), fp)) {
        // Look for the "MemTotal" line
        if (strncmp(line, "MemTotal", 8) == 0) {
            printf("Memory: %s", line + 9); // Print the memory info
            break;
        }
    }

    fclose(fp);
}

// Function to get and print kernel version using uname
void print_kernel_info() {
    struct utsname uname_buf; // Structure to hold system info

    // Call uname to fill the structure with system info
    if (uname(&uname_buf) == 0) {
        printf("Kernel: %s\n", uname_buf.release); // Print kernel release string
    } else {
        perror("uname failed");
    }
}

// Main function: calls all info functions
int main() {
    printf("=== System Info ===\n");

    print_kernel_info(); // Display kernel version
    print_cpu_info();    // Display CPU info
    print_mem_info();    // Display memory info

    return 0; // Return 0 to indicate successful execution
}

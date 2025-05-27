#include <fcntl.h>    // for open flags
#include <unistd.h>   // for read, write, close
#include <stdio.h>    // for perror
#include <stdlib.h>   // for exit


/* Using System Calls, this program:
- Opens the source file for reading.
- Opens/creates the destination file for writing.
- Reads chunks of bytes from source and write them to destination.
- Closes both files.

Explanation:
open() is used to open files and returns a file descriptor (int).
read() reads bytes into a buffer from the source file.
write() writes bytes from the buffer into the destination file.
close() closes file descriptors.
The program handles errors and prints messages using perror() or direct writes.

*/

#define BUFFER_SIZE 1024

int main(int argc, char *argv[]) {
    int src_fd, dest_fd;
    ssize_t bytes_read, bytes_written;
    char buffer[BUFFER_SIZE];

    if (argc != 3) {
        // Expect exactly 2 arguments: source file and destination file
        write(STDERR_FILENO, "Usage: copy_syscalls source dest\n", 34);
        exit(EXIT_FAILURE);
    }

    // Open the source file for reading only
    src_fd = open(argv[1], O_RDONLY);
    if (src_fd == -1) {
        perror("Error opening source file");
        exit(EXIT_FAILURE);
    }

    // Open the destination file for writing, create it if it doesn't exist, truncate if it does
    // Permissions set to rw-r--r-- (0644)
    dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (dest_fd == -1) {
        perror("Error opening/creating destination file");
        close(src_fd);
        exit(EXIT_FAILURE);
    }

    // Read from source and write to destination in chunks
    while ((bytes_read = read(src_fd, buffer, BUFFER_SIZE)) > 0) {
        bytes_written = write(dest_fd, buffer, bytes_read);
        if (bytes_written != bytes_read) {
            perror("Error writing to destination file");
            close(src_fd);
            close(dest_fd);
            exit(EXIT_FAILURE);
        }
    }

    if (bytes_read == -1) {
        perror("Error reading from source file");
    }

    // Close both files
    close(src_fd);
    close(dest_fd);

    return 0;
}

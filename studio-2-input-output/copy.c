#include <unistd.h>

#define bufferSize 200

int main(void) {
    char buffer[bufferSize];

    while (1) {
        ssize_t n = read(STDIN_FILENO, buffer, bufferSize);

        if (n == 0) {
            break; // EOF
        }
        if (n < 0) {
            return 1; // read error
        }

        ssize_t w = write(STDOUT_FILENO, buffer, (size_t)n);
        if (w < 0) {
            return 1; // write error
        }
    }
    return 0;
}
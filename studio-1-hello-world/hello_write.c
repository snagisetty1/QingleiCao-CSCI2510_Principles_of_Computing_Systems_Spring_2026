#include <unistd.h>

int main(int argc, char* argv[]) {
    (void)argc; (void)argv;

    const char msg[] = "Hello, world!\n";
    write(STDOUT_FILENO, msg, sizeof(msg) - 1);

    return 0;
}

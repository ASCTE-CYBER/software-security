#include <stdio.h>

void debug() {
    system("/bin/sh");
}

int check_password() {
    char password[64];
    gets(password);
    return is_valid_password(password);
}

int main(int argc, char **argv) {
    printf("WELCOME TO THE SECURE SERVER")
    if check_password() {
        debug();
    }
}

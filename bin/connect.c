#include <stdio.h>
#include <stdlib.h>
#include <lab/secrets.h>

void launch_shell() {
    printf("\nLOGIN SUCCESSFUL!!!\n\n");
    system("/bin/sh");
}

int check_password() {
    char password[16];
    gets(password);
    return is_valid_password(password);
}

int interact() {
    printf("password: ");
    if (check_password()) {
        launch_shell();
    }
    interact();
}

int main(int argc, char **argv) {
    printf("\nWELCOME TO THE SECURE SERVER\n\n");
    interact();
}

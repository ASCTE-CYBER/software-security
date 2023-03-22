#include <stdio.h>
#include <stdlib.h>
#include <lab/secrets.h>

void launch_shell() {
    printf("\nLOGIN SUCCESSFUL!!!\n\n");
    system("/bin/sh");
}

int check_password() {
    char password[64];
    gets(password);
    return is_valid_password(password);
}

int main(int argc, char **argv) {
    printf("\nWELCOME TO THE SECURE SERVER\n\npassword: ");
    if (check_password()) {
        launch_shell();
    }
}

#include <stdio.h>
#include <string.h>
#include <lab/secrets.h>

void launch_shell() {
    printf("\nLOGIN SUCCESSFUL!!!\n\n");
    /*system("echoexport PS1='SECURE-SERVER# ' >> /etc/profile");*/
    /*system("/bin/sh");*/
}

int main(void)
{
    char buff[15];
    int pass = 0;

    printf("\npassword: ");
    gets(buff);

    if(strcmp(buff, "thegeekstuff"))
    {
        printf ("\n Wrong Password \n");
    }
    else
    {
        printf ("\n Correct Password \n");
        pass = 1;
    }

    if(pass)
    {
       /* Now Give root or admin rights to user*/
        /*printf ("\n Root privileges given to the user \n");*/
        launch_shell();
    }

    return 0;
}

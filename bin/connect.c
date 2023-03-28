#include <stdio.h>
#include <string.h>
#include <photos/jpg.h>

int main(void)
{
    char buff[15];
    int pass = 0;
    while (1)
    {
        printf("password: ");
        gets(buff);
        if(pass)
        {
            launch_shell();
            return 0;
        }
        else
        {
            continue;
        }
    }
}

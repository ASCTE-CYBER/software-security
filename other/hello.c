#include <stdio.h>

int main(void)
{
    int MAX_BUF = 15;
    char name[MAX_BUF];
    printf("Enter your first name: ");
    fgets(name, MAX_BUF, stdin);
    printf("Hello, %s", name);
}

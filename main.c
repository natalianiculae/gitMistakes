// main.c
#include <stdio.h>

int main() {
    char name[50];

    printf("Hello, world!\n");

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Hello, %s", name);
    return 0;
}

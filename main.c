// main.c
#include <stdio.h>

int main() {
    char name[50];

    printf("Hello, world!\n");

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Hello, %s", name);
    addColor(255, 0, 0); // Example function call to add color (assuming this function is defined elsewhere)
    return 0;
}

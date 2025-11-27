//Print each character of a string on a new line.
#include <stdio.h>

void printCharByChar(char *str) {
    // Pointer Arithmetic Approach:
    // We point to the start of the string and increment the pointer
    // until we hit the Null Terminator.
    while (*str != '\0') {
        printf("%c\n", *str);
        str++; // Move to the next memory address
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    // Read string including spaces
    scanf("%[^\n]", str);

    printf("Output:\n");
    printCharByChar(str);

    return 0;
}
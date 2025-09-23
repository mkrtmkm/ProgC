#include <stdio.h>

int main() {
    int input;
    unsigned char n;

    do {
        printf("Enter a number (0-255):");
        scanf("%d", &input);
        if (input < 0 || input > 255) {
            printf("Number must be between 0 and 255, try again.\n");
        }
    } while (input < 0 || input > 255);

    n = (unsigned char)input;
    unsigned char res = (n << 1) | (n >> 7);
    printf("The result is: %hhu", res);
}
#include <stdio.h>

int main() {
    char a1, a2, a3, a4, a5, a6, a7, a8, a9;

    printf("Enter 9 symbols (X, O or space):\n");
    scanf("%c%c%c%c%c%c%c%c%c",
        &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9);

    printf("\n%c | %c | %c \n", a1, a2, a3);
    printf("----------\n");
    printf("%c | %c | %c \n", a4, a5, a6);
    printf("----------\n");
    printf("%c | %c | %c \n", a7, a8, a9);

}
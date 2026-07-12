// This is que_81.c inside sa.day_21
//Q81	Write a program to Find string length without strlen().	Microsoft, Adobe, Paytm

#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }

    printf("Length of string = %d\n", length);

    return 0;
}

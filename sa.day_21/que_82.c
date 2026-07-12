// This is que_82.c inside sa.day_21
//Q82	Write a program to Reverse a string

#include <stdio.h>

int main() {
    char str[100], rev[100];
    int i, j, len = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        len++;
    }

    j = len - 1;
    for (i = 0; i < len; i++) {
        rev[i] = str[j];
        j--;
    }
    rev[len] = '\0';

    printf("Reversed string = %s\n", rev);

    return 0;
}

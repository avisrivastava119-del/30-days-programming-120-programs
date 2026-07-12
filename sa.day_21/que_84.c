// This is que_84.c inside sa.day_21
//Q84	Write a program to Convert lowercase to uppercase.	TCS, Infosys, Wipro

#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("Uppercase string = %s\n", str);

    return 0;
}

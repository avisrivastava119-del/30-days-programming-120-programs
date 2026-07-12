// This is que_31.c inside sa.day_08
/*Q31	Write a program to Print character triangle.
A
AB
ABC
ABCD
ABCDE	Microsoft, Adobe, Paytm
*/
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}

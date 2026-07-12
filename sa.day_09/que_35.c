// This is que_35.c inside sa.day_09
/*Q35	Write a program to Print repeated character pattern.
A
BB
CCC
DDDD
EEEEE	Microsoft, Adobe, Paytm
*/
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c", 'A' + i - 1);
        }
        printf("\n");
    }

    return 0;
}

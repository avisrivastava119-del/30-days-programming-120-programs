// This is que_29.c inside sa.day_08
//29.Write a program to Print half pyramid pattern.
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

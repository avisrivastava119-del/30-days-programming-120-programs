// This is que_79.c inside sa.day_20
//Q79	Write a program to Find row-wise sum.	TCS, Infosys, Wipro

#include <stdio.h>

int main() {
    int r, c, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];
    printf("Enter elements of matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Row-wise sum:\n");
    for (i = 0; i < r; i++) {
        int sum = 0;
        for (j = 0; j < c; j++) {
            sum += a[i][j];
        }
        printf("Row %d sum = %d\n", i + 1, sum);
    }

    return 0;
}

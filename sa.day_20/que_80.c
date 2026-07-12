// This is que_80.c inside sa.day_20
//Q80	Write a program to Find column-wise sum.	TCS, Infosys, Wipro

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

    printf("Column-wise sum:\n");
    for (j = 0; j < c; j++) {
        int sum = 0;
        for (i = 0; i < r; i++) {
            sum += a[i][j];
        }
        printf("Column %d sum = %d\n", j + 1, sum);
    }

    return 0;
}

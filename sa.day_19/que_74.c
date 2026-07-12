// This is que_74.c inside sa.day_19
//Q74	Write a program to Subtract matrices.	TCS, Infosys, Wipro

#include <stdio.h>

int main() {
    int r, c, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c], b[r][c], diff[r][c];

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("Resultant matrix after subtraction:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// This is que_76.c inside sa.day_19
//Q76	Write a program to Find diagonal sum.	TCS, Infosys, Wipro

#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int a[n][n];
    printf("Enter elements of matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int primarySum = 0, secondarySum = 0;
    for (i = 0; i < n; i++) {
        primarySum += a[i][i];             // primary diagonal
        secondarySum += a[i][n - i - 1];   // secondary diagonal
    }

    printf("Primary diagonal sum = %d\n", primarySum);
    printf("Secondary diagonal sum = %d\n", secondarySum);

    return 0;
}

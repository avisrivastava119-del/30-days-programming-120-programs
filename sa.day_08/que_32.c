// This is que_32.c inside sa.day_08
/*Q32	Write a program to Print repeated-number pattern.
1
22
333
4444
55555
	TCS, Infosys, Wipro
*/
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}

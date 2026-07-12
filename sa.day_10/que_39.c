// This is que_39.c inside sa.day_10
/*Q39	Write a program to Print number pyramid.
    1
   121
  12321
 1234321
123454321	TCS, Infosys, Wipro
*/
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

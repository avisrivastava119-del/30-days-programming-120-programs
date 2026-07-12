// This is que_36.c inside sa.day_09
/*Q36	Write a program to Print hollow square pattern.
*****
*      *
*      *
*      *
*****	TCS, Infosys, Wipro
*/
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter size of square: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

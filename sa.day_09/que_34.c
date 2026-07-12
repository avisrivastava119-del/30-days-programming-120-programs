// This is que_34.c inside sa.day_09
/*Q34	Write a program to Print reverse number triangle.

12345
1234
123
12
1	TCS, Infosys, Wipro
*/
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

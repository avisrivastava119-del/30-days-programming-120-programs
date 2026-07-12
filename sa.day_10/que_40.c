// This is que_40.c inside sa.day_10
/*Q40	Write a program to Print character pyramid.
      A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA	Microsoft, Adobe, Paytm
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
        for (j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        for (j = i - 2; j >= 0; j--) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}

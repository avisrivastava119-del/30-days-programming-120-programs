//Q4	Write a program to Count digits in a number.	
#include <stdio.h>

int main() {
    int n, count = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Special case for 0
    if(n == 0) {
        count = 1;
    } else {
        // Count digits
        while(n != 0) {
            n = n / 10;
            count++;
        }
    }

    // Display result
    printf("Number of digits = %d\n", count);

    return 0;
}
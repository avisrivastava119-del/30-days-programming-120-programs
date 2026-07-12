
//Q3	Write a program to Find factorial of a number.
#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate factorial
    for(int i = 1; i <= n; i++) {
        factorial *= i;
    }
      // Display result
    printf("Factorial of %d = %lld\n", n, factorial);

    return 0;
}

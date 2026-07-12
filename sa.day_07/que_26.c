// This is que_26.c inside sa.day_07
//Q26	Write a program to Recursive Fibonacci.	TCS, Infosys, Wipro
#include <stdio.h>
int fibonacci(int n) {
    if (n == 0) return 0;   // base case
    if (n == 1) return 1;   // base case
    return fibonacci(n - 1) + fibonacci(n - 2);  // recursive relation
}

int main() {
    int n, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}

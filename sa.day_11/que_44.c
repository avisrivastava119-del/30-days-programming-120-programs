// This is que_44.c inside sa.day_11
//Q44	Write a program to Write function to find factorial.	TCS, Infosys, Wipro
#include <stdio.h>

long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Factorial of negative numbers is not defined.\n");
    else
        printf("Factorial of %d = %lld\n", num, factorial(num));

    return 0;
}


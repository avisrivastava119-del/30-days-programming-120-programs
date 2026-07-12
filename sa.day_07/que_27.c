// This is que_27.c inside sa.day_07
//Q27	Write a program to Recursive sum of digits.	TCS, Infosys, Wipro
#include <stdio.h>
int sumOfDigits(int n) {
    if (n == 0)   // base case
        return 0;
    return (n % 10) + sumOfDigits(n / 10);  // recursive call
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of digits of %d = %d\n", num, sumOfDigits(num));

    return 0;
}

// This is que_28.c inside sa.day_07
//Q28	Write a program to Recursive reverse number.	TCS, Infosys, Wipro
#include <stdio.h>

// Recursive function to reverse a number
int reverseNumber(int n, int rev) {
    if (n == 0)
        return rev;
    return reverseNumber(n / 10, rev * 10 + (n % 10));
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reversed Number = %d\n", reverseNumber(num, 0));

    return 0;
}


//6. Write a program to Reverse a number.(TCS, Infosys, Wipro)


#include <stdio.h>

int main() {
    int n, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    printf("Reversed number = %d\n", rev);

    return 0;
}


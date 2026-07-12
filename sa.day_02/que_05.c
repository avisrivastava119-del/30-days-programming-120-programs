//5. Write a program to Find sum of digits of a number. (TCS, Infosys, Wipro)

#include <stdio.h>

int main() {
    int n, sum = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
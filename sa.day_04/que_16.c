//Q16. Write a program to Print Armstrong Numbers in a Range.

#include <stdio.h>
#include <math.h>

int main() {
    int start, end, num, temp, digits, remainder, result;

    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);

    printf("Armstrong Numbers:\n");

    for (num = start; num <= end; num++) {
        temp = num;
        digits = 0;
        result = 0;

        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = num;

        while (temp != 0) {
            remainder = temp % 10;
            result += pow(remainder, digits);
            temp /= 10;
        }

        if (result == num)
            printf("%d ", num);
    }

    return 0;
}
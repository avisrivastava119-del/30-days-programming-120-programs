//Question 18
#include <stdio.h>

int main() {
    int fact[10] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
    int num, temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        sum += fact[digit];   // directly use precomputed factorial
        temp /= 10;
    }

    if (sum == num)
        printf("%d is a Strong Number\n", num);
    else
        printf("%d is NOT a Strong Number\n", num);

    return 0;
}

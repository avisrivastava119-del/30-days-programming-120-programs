//Question 17
#include <stdio.h>
#include <math.h>

int main() {
    int num, i, sum = 1;  // 1 is always a divisor

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is NOT a Perfect Number\n", num);
        return 0;
    }

    for (i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i)  // avoid double counting
                sum += num / i;
        }
    }

    if (sum == num)
        printf("%d is a Perfect Number\n", num);
    else
        printf("%d is NOT a Perfect Number\n", num);

    return 0;
}

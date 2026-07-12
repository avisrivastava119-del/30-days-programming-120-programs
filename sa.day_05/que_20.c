//Q20. Find Largest Prime Factor Company: TCS, Infosys, Wipro

#include <stdio.h>
#include <math.h>

long largestPrimeFactor(long n) {
    long maxPrime = -1;

    while (n % 2 == 0) {
        maxPrime = 2;
        n /= 2;
    }
        for (long i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            maxPrime = i;
            n /= i;
        }
    }
    if (n > 2)
        maxPrime = n;

    return maxPrime;
}

int main() {
    long num;
    printf("Enter a number: ");
    scanf("%ld", &num);

    printf("Largest Prime Factor of %ld is %ld\n", num, largestPrimeFactor(num));

    return 0;
}

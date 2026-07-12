// This is que_24.c inside sa.day_06
//Q24. Find x^n without pow() Company: TCS, Infosys, Wipro
#include <stdio.h>

long long power(int x, int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= x;
    }
    return result;
}

int main() {
    int x, n;
    printf("Enter base (x): ");
    scanf("%d", &x);
    printf("Enter exponent (n): ");
    scanf("%d", &n);

    printf("%d^%d = %lld\n", x, n, power(x, n));

    return 0;
}


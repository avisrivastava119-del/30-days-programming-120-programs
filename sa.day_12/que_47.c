// This is que_47.c inside sa.day_12
//Q47	Write a program to Write function for Fibonacci.	TCS, Infosys, Wipro
#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, next;
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter number of terms: ");
    scanf("%d", &num);

    fibonacci(num);

    return 0;
}


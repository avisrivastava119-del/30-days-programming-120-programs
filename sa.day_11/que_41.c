// This is que_41.c inside sa.day_11
//Q41	Write a program to Write function to find sum of two numbers.	TCS, Infosys, Wipro
#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Sum = %d\n", sum(x, y));

    return 0;
}

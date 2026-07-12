// This is que_42.c inside sa.day_11
//Q42	Write a program to Write function to find maximum.	TCS, Infosys, Wipro
#include <stdio.h>

int maximum(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Maximum = %d\n", maximum(x, y));

    return 0;
}

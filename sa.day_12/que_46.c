// This is que_46.c inside sa.day_12
//Q46	Write a program to Write function for Armstrong.	TCS, Infosys, Wipro

#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int sum = 0, temp = n, digits = 0;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp > 0) {
        int r = temp % 10;
        sum += pow(r, digits);
        temp /= 10;
    }
    return (sum == n);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is Armstrong\n", num);
    else
        printf("%d is Not Armstrong\n", num);

    return 0;
}

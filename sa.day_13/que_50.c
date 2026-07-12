// This is que_50.c inside sa.day_13
//Q50	Write a program to Find sum and average of array.	Amazon, Deloitte, Capgemini

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    float avg = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}

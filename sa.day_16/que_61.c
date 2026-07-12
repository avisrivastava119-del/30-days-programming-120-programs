// This is que_61.c inside sa.day_16
//Q61	Write a program to Find missing number in array.	Amazon, Deloitte, Capgemini
#include <stdio.h>

int findMissing(int arr[], int n) {
    int total = (n + 1) * (n + 2) / 2;  // sum of 1 to n+1
    for (int i = 0; i < n; i++) {
        total -= arr[i];
    }
    return total;
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (from 1 to n+1 with one missing):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Missing number = %d\n", findMissing(arr, n));

    return 0;
}

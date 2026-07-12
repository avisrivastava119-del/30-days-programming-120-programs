// This is que_64.c inside sa.day_16
//Q64	Write a program to Remove duplicates from array.	Amazon, Deloitte, Capgemini

#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    int i, j, k;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n;) {
            if (arr[i] == arr[j]) {
                for (k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;
            } else {
                j++;
            }
        }
    }
    return n;
}

int main() {
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    n = removeDuplicates(arr, n);

    printf("Array after removing duplicates:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

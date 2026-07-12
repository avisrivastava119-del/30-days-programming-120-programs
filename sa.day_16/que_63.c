// This is que_63.c inside sa.day_16
//Q63	Write a program to Find pair with given sum.	TCS, Infosys, Wipro

#include <stdio.h>

void findPair(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("Pair found: (%d, %d)\n", arr[i], arr[j]);
                return;
            }
        }
    }
    printf("No pair found\n");
}

int main() {
    int n, target;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter target sum: ");
    scanf("%d", &target);

    findPair(arr, n, target);

    return 0;
}

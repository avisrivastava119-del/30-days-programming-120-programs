// This is que_60.c inside sa.day_15

#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int index = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            int temp = arr[index];
            arr[index] = arr[i];
            arr[i] = temp;
            index++;
        }
    }

    printf("Array after moving zeroes to end: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// This is que_62.c inside sa.day_16
//Q62	Write a program to Find maximum frequency element.	TCS, Infosys, Wipro

#include <stdio.h>

int findMaxFrequency(int arr[], int n) {
    int maxFreq = 0, element = arr[0];

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > maxFreq) {
            maxFreq = count;
            element = arr[i];
        }
    }

    printf("Element with maximum frequency = %d\n", element);
    printf("Frequency = %d\n", maxFreq);
    return element;
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findMaxFrequency(arr, n);

    return 0;
}

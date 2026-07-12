// This is que_52.c inside sa.day_13
//Q52	Write a program to Count even and odd elements.	TCS, Infosys, Wipro

#include <stdio.h>

int main() {
    int n, i, even = 0, odd = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even elements = %d\n", even);
    printf("Odd elements = %d\n", odd);

    return 0;
}

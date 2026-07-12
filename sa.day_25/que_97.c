// This is que_97.c inside sa.day_25
// QUES_97 : Write a program to merge two sorted arrays.

#include <stdio.h>
int main() {
    int n1, n2, i = 0, j = 0, k = 0;
    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d sorted elements of first array:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);
    int arr2[n2], merge[n1 + n2];
    printf("Enter %d sorted elements of second array:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    i = 0;
    while(i < n1 && j < n2) {
        if(arr1[i] <= arr2[j])
            merge[k++] = arr1[i++];
        else
            merge[k++] = arr2[j++];
    }
    while(i < n1)
        merge[k++] = arr1[i++];
    while(j < n2)
        merge[k++] = arr2[j++];
    printf("Merged sorted array: ");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merge[i]);
    }
    return 0;
}
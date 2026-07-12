// This is que_114.c inside sa.day_29
// QUES_114 : Write a program to create menu-driven array operations system.

#include <stdio.h>
int main() {
    int arr[100], n, i;
    int choice, sum = 0, max, min;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    do {
        printf("\n----- ARRAY OPERATIONS MENU -----\n");
        printf("1. Display Array\n");
        printf("2. Find Sum\n");
        printf("3. Find Maximum\n");
        printf("4. Find Minimum\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Array Elements: ");
                for(i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 2:
                sum = 0;
                for(i = 0; i < n; i++) {
                    sum += arr[i];
                }
                printf("Sum = %d\n", sum);
                break;
            case 3:
                max = arr[0];
                for(i = 1; i < n; i++) {
                    if(arr[i] > max)
                        max = arr[i];
                }
                printf("Maximum Element = %d\n", max);
                break;
            case 4:
                min = arr[0];
                for(i = 1; i < n; i++) {
                    if(arr[i] < min)
                        min = arr[i];
                }
                printf("Minimum Element = %d\n", min);
                break;
            case 5:
                printf("Exiting Program...\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } while(choice != 5);
    return 0;
}
// This is que_117.c inside sa.day_30
// QUES_117 : Write a program to create student record system using arrays and strings.

#include <stdio.h>
int main() {
    int roll[10];
    char name[10][50];
    float marks[10];
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &roll[i]);
        printf("Name: ");
        scanf("%s", name[i]);
        printf("Marks: ");
        scanf("%f", &marks[i]);
    }
    printf("\n----- Student Records -----\n");
    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", roll[i]);
        printf("Name : %s\n", name[i]);
        printf("Marks : %.2f\n", marks[i]);
    }
    return 0;
}
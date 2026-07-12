// This is que_120.c inside sa.day_30
// QUES_120 : Write a program to develop complete mini project using arrays, strings and functions.

#include <stdio.h>
#define MAX 10
int roll[MAX];
char name[MAX][50];
float marks[MAX];
int n;
void addStudents() {
    int i;
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
}
void displayStudents() {
    int i;
    printf("\n----- Student Records -----\n");
    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", roll[i]);
        printf("Name : %s\n", name[i]);
        printf("Marks : %.2f\n", marks[i]);
    }
}
void searchStudent() {
    int i, searchRoll;
    printf("Enter Roll Number to search: ");
    scanf("%d", &searchRoll);
    for(i = 0; i < n; i++) {
        if(roll[i] == searchRoll) {
            printf("\nStudent Found!\n");
            printf("Roll Number : %d\n", roll[i]);
            printf("Name : %s\n", name[i]);
            printf("Marks : %.2f\n", marks[i]);
            return;
        }
    }
    printf("Student not found.\n");
}
int main() {
    int choice;
    do {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Students\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                addStudents();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                printf("Thank you!\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }
    } while(choice != 4);
    return 0;
}
// This is que_112.c inside sa.day_28
// QUES_112 : Write a program to create contact management system.

#include <stdio.h>
struct Contact {
    char name[50];
    char phone[15];
};
int main() {
    struct Contact contact[10];
    int n, i;
    printf("Enter the number of contacts: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Contact %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", contact[i].name);
        printf("Phone Number: ");
        scanf("%s", contact[i].phone);
    }
    printf("\n----- Contact List -----\n");
    for(i = 0; i < n; i++) {
        printf("\nContact %d\n", i + 1);
        printf("Name : %s\n", contact[i].name);
        printf("Phone Number : %s\n", contact[i].phone);
    }
    return 0;
}
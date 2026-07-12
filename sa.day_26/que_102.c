// This is que_102.c inside sa.day_26
// QUES_102 : Write a program to create voting eligibility system.

#include <stdio.h>
int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age >= 18)
        printf("You are eligible to vote.");
    else
        printf("You are not eligible to vote.");
    return 0;
}
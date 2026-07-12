// This is que_85.c inside sa.day_22
// QUES_85 : Write a program to check palindrome string.

#include <stdio.h>
int main() {
    char str[100];
    int i, length = 0, flag = 1;
    printf("Enter a string: ");
    scanf("%s", str);
    while(str[length] != '\0') {
        length++;
    }
    for(i = 0; i < length / 2; i++) {
        if(str[i] != str[length - i - 1]) {
            flag = 0;
            break;
        }
    }
    if(flag)
        printf("The string is a palindrome.");
    else
        printf("The string is not a palindrome.");
    return 0;
}
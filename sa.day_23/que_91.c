// This is que_91.c inside sa.day_23
// QUES_91 : Write a program to check anagram strings.

#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int i, j, temp;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    // Sort first string
    for(i = 0; str1[i] != '\0'; i++) {
        for(j = i + 1; str1[j] != '\0'; j++) {
            if(str1[i] > str1[j]) {
                temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
        }
    }
    // Sort second string
    for(i = 0; str2[i] != '\0'; i++) {
        for(j = i + 1; str2[j] != '\0'; j++) {
            if(str2[i] > str2[j]) {
                temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }
    // Compare strings
    i = 0;
    while(str1[i] != '\0' && str2[i] != '\0') {
        if(str1[i] != str2[i]) {
            printf("Strings are not anagrams.");
            return 0;
        }
        i++;
    }
    if(str1[i] == '\0' && str2[i] == '\0')
        printf("Strings are anagrams.");
    else
        printf("Strings are not anagrams.");
    return 0;
}
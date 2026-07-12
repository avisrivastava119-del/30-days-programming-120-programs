// This is que_92.c inside sa.day_23
// QUES_92 : Write a program to find maximum occurring character.

#include <stdio.h>
int main() {
    char str[100];
    int i, j, count, maxCount = 0;
    char maxChar;
    printf("Enter a string: ");
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++) {
        count = 1;
        for(j = i + 1; str[j] != '\0'; j++) {
            if(str[i] == str[j])
                count++;
        }
        if(count > maxCount) {
            maxCount = count;
            maxChar = str[i];
        }
    }
    printf("Maximum occurring character = %c\n", maxChar);
    printf("Frequency = %d", maxCount);
    return 0;
}
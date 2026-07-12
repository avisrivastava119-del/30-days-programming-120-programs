// This is que_89.c inside sa.day_23
// QUES_89 : Write a program to find first non-repeating character.

#include <stdio.h>
int main() {
    char str[100];
    int i, j, count;
    printf("Enter a string: ");
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++) {
        count = 0;
        for(j = 0; str[j] != '\0'; j++) {
            if(str[i] == str[j])
                count++;
        }
        if(count == 1) {
            printf("First non-repeating character = %c", str[i]);
            return 0;
        }
    }
    printf("No non-repeating character found.");
    return 0;
}
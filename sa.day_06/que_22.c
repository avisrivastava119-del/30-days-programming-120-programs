// This is que_22.c inside sa.day_06
//Convert Binary to Decimal Company: TCS, Infosys, Wipro

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char binary[64];
    int decimal = 0, len, i;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    len = strlen(binary);

    for (i = 0; i < len; i++) {
        if (binary[len - i - 1] == '1') {
            decimal += pow(2, i);
        }
    }

    printf("Decimal: %d\n", decimal);

    return 0;
}

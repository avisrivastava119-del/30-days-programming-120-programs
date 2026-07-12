// This is que_21.c inside sa.day_06
//Q21. Convert Decimal to Binary Company: TCS, Infosys, Wipro

#include <stdio.h>

int main() {
    int num, i = 0;
    int binary[32];  // store remainders (max 32 bits)

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    while (num > 0) {
        binary[i] = num % 2;  // remainder
        num = num / 2;
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}

// This is que_110.c inside sa.day_28
// QUES_110 : Write a program to create bank account system.

#include <stdio.h>
struct BankAccount {
    int accountNumber;
    char name[50];
    float balance;
};
int main() {
    struct BankAccount acc;
    int choice;
    float amount;
    printf("Enter Account Number: ");
    scanf("%d", &acc.accountNumber);
    printf("Enter Account Holder Name: ");
    scanf("%s", acc.name);
    printf("Enter Initial Balance: ");
    scanf("%f", &acc.balance);
    do {
        printf("\n----- Bank Account Menu -----\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Current Balance: %.2f\n", acc.balance);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                acc.balance += amount;
                printf("Deposit Successful.\n");
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if(amount <= acc.balance) {
                    acc.balance -= amount;
                    printf("Withdrawal Successful.\n");
                } else {
                    printf("Insufficient Balance.\n");
                }
                break;
            case 4:
                printf("Thank you for using the Bank Account System.\n");
                break;
            default:
                printf("Invalid Choice.\n");
        }
    } while(choice != 4);
    return 0;
}
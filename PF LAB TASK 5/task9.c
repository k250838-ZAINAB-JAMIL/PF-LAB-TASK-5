#include <stdio.h>
int main() {
    int PIN = 0001;
    int withdraw;
    int balance = 50000;
    int rem_balance;

    printf("WELCOME!\n");
    printf("Enter 4-digit PIN:\n");
    scanf("%d",&PIN);
    if (PIN == 0001) {
        printf("Enter the withdrawal amount:\n");
        scanf("%d",&withdraw);
        if (withdraw >= balance) {
        printf("Insufficient Balance!\n");
    } else { 
        printf("Amount is withdrawn!\n");
            rem_balance = balance - withdraw;
            printf("The remaining balance is %d\n", rem_balance);

        }

    } else {
        printf("Invalid PIN!");

    } return 0;
}


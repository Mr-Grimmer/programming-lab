#include <stdio.h>
#include <string.h>

struct Customer {
    int accountNumber;
    char name[50];
    float balance;
};

void checkBalanceBelow1000(struct Customer customers[], int n) {
    printf("Customers with balance below Rs. 1000:\n");
    for (int i = 0; i < n; i++) {
        if (customers[i].balance < 1000) {
            printf("Account No: %d, Name: %s\n", customers[i].accountNumber, customers[i].name);
        }
    }
}

void updateBalance(struct Customer customers[], int n) {
    int accountNumber, code;
    float amount;
    
    printf("Enter account number: ");
    scanf("%d", &accountNumber);
    printf("Enter amount: ");
    scanf("%f", &amount);
    printf("Enter code (1 for deposit, 0 for withdrawal): ");
    scanf("%d", &code);
    
    for (int i = 0; i < n; i++) {
        if (customers[i].accountNumber == accountNumber) {
            if (code == 1) {
                customers[i].balance += amount;
                printf("New balance: %.2f\n", customers[i].balance);
            } else if (code == 0) {
                if (customers[i].balance < amount) {
                    printf("The balance is insufficient for the specified withdrawal.\n");
                } else {
                    customers[i].balance -= amount;
                    printf("New balance: %.2f\n", customers[i].balance);
                }
            }
            return;
        }
    }
    
    printf("Account not found!\n");
}

int main() {
    struct Customer customers[100];
    int n;
    
    printf("Enter number of customers: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Enter account number, name, and balance of customer %d:\n", i + 1);
        scanf("%d %s %f", &customers[i].accountNumber, customers[i].name, &customers[i].balance);
    }
    
    checkBalanceBelow1000(customers, n);
    updateBalance(customers, n);

    return 0;
}

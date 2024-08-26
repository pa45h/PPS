// create a structure representing bank account of a customer.

#include <stdio.h>
#include <string.h>

typedef struct BankAccount
{
    int accNo;
    char name[50];
    char accType[15];
    double balance;
    char email[25];
    int phoneNo;
    int openingDate[11];

} acc;

int main()
{
    acc a1;
    a1.accNo = 1234567890;
    strcpy(a1.name, "QWERTY");
    strcpy(a1.accType, "Saving");
    a1.balance = 12345;
    strcpy(a1.email, "qwerty1234@gmail.com");
    a1.phoneNo = 9876543210;
    strcpy(a1.openingDate, "26/07/2010");

    printf("Account Number: %d\n", a1.accNo);
    printf("Account Holder Name: %s\n", a1.name);
    printf("Account Type: %s\n", a1.accType);
    printf("Balance: %.2f\n", a1.balance);
    printf("Email id: %s\n", a1.email);
    printf("Contact no.: %d\n", a1.phoneNo);
    printf("Date of Opening: %s\n", a1.openingDate);

    return 0;
}


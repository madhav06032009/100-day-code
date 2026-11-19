
#include <stdio.h>
int main()
{
    int account = 1001, pin = 1234;
    int acc, enteredPin, attempts = 0, choice = 0;
    int balance = 5000, amount;
    int note500 = 20, note200 = 20, note100 = 20;
    int n500, n200, n100, remaining, found, i, j;
    printf("===== WELCOME TO ATM =====\n");
    printf("Enter Account Number: ");
    if (scanf("%d", &acc) != 1 || acc != account)
    {
        printf("Invalid Account Number!\n");
        return 0;
    }
    while (attempts < 3)
    {
        printf("Enter PIN: ");
        if (scanf("%d", &enteredPin) != 1)
        {
            printf("Invalid PIN input!\n");
            return 0;
        }
        if (enteredPin == pin)
        {
            printf("Login Successful!\n");
            break;
        }
        attempts++;
        printf("Wrong PIN! Attempts left: %d\n", 3 - attempts);
    }
    if (attempts == 3)
    {
        printf("Account blocked!\n");
        return 0;
    }
    do
    {
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input!\n");
            return 0;
        }
        switch (choice)
        {
            case 1:
                printf("Your current balance is: Rs. %d\n", balance);
                break;
            case 2:
                printf("Enter deposit amount: ");
                if (scanf("%d", &amount) != 1)
                {
                    printf("Invalid input!\n");
                    return 0;
                }
                if (amount <= 0 || amount % 100 != 0)
                    printf("Invalid amount! Enter multiple of 100.\n");
                else if (amount > 100000 - balance)
                    printf("Deposit limit exceeded!\n");
                else
                {
                    balance = balance + amount;
                    printf("Money deposited successfully!\n");
                    printf("Updated balance: Rs. %d\n", balance);
                }
                break;
            case 3:
                printf("Enter withdrawal amount: ");
                if (scanf("%d", &amount) != 1)
                {
                    printf("Invalid input!\n");
                    return 0;
                }
                if (amount <= 0 || amount % 100 != 0)
                    printf("Invalid amount! Enter multiple of 100.\n");
                else if (amount > balance)
                    printf("Insufficient Balance!\n");
                else
                {
                    found = 0;
                    for (i = note500; i >= 0 && !found; i--)
                    {
                        if (i * 500 > amount)
                            continue;
                        for (j = note200; j >= 0; j--)
                        {
                            remaining = amount - i * 500 - j * 200;
                            if (remaining < 0)
                                continue;
                            if (remaining / 100 <= note100)
                            {
                                n500 = i;
                                n200 = j;
                                n100 = remaining / 100;
                                found = 1;
                                break;
                            }
                        }
                    }
                    if (found == 0)
                        printf("Required notes not available!\n");
                    else
                    {
                        balance = balance - amount;
                        note500 = note500 - n500;
                        note200 = note200 - n200;
                        note100 = note100 - n100;
                        printf("Withdrawal Successful!\n");
                        printf("Number of 500 notes: %d\n", n500);
                        printf("Number of 200 notes: %d\n", n200);
                        printf("Number of 100 notes: %d\n", n100);
                        printf("Updated balance: Rs. %d\n", balance);
                    }
                }
                break;
            case 4:
                printf("Thank you for using ATM!\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4);
    return 0;
}

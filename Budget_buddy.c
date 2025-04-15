#include <stdio.h>
#include <string.h>

#define MAX_EXPENSES 100

typedef struct
{
    char category[20];
    float amount;
} Expense;

Expense expenses[MAX_EXPENSES];
int expenseCount = 0;

void addExpense()
{
    if (expenseCount < MAX_EXPENSES)
    {
        printf("Enter category: ");
        scanf("%s", expenses[expenseCount].category);
        printf("Enter amount: ");
        scanf("%f", &expenses[expenseCount].amount);
        expenseCount++;
        printf("Expense added successfully!\n");
    }
    else
    {
        printf("Expense limit reached!\n");
    }
}

void displayExpenses()
{
    printf("\nExpenses:\n");
    for (int i = 0; i < expenseCount; i++)
    {
        printf("Category: %s, Amount: %.2f\n", expenses[i].category, expenses[i].amount);
    }
}

int main()
{
    int choice;
    do
    {
        printf("\n1. Add Expense\n2. View Expenses\n3. Exit\nChoose an option: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addExpense();
            break;
        case 2:
            displayExpenses();
            break;
        case 3:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice! Try again.\n");
        }
    } while (choice != 3);

    return 0;
}
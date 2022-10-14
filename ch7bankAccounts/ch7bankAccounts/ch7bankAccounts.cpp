// ch7bankAccounts.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct BankAccount
{
    string account = {};
    int accountNumber{};
    double balance{};
};
//function prototypes
void withdraw(BankAccount& account, double amount);
void deposit(BankAccount& account, double amount);
void displayAccount(BankAccount account);
void withdraw2(BankAccount& account2, double amount2);
void deposit2(BankAccount& account2, double amount2);
void displayAccount2(BankAccount account2);
double amount, amount2;
int main()
{
    cout << "Ch 7 Bank Accounts by Kevin Bell\n\n";
    BankAccount account = {"Checking", 1234, 100}, account2 = {"Savings", 9876, 50};
    displayAccount(account);
    withdraw(account, amount);
    cout << endl;
    displayAccount(account);
    deposit(account, amount);
    cout << endl;
    displayAccount(account);
    cout << endl;
    displayAccount2(account2);
    deposit2(account2, amount2);
    cout << endl;
    displayAccount2(account2);
    withdraw2(account2, amount2);
    cout << endl;
    displayAccount2(account2);
    system("pause");
    return 0;
}

void withdraw(BankAccount& account, double amount)
{
    cout << "How much would you like to withdraw? ";
    cin >> amount;
    if (amount > account.balance)
    {
        cout << "Insufficient funds. Transaction cancelled.\n";
    }
    else
    {
        account.balance -= amount;
    }
}

void deposit(BankAccount& account, double amount)
{
    cout << "How much would you like to deposit? ";
    cin >> amount;
    account.balance += amount;
}

void displayAccount(BankAccount account)
{
    cout << account.account << " " << account.accountNumber << " " << "has a balance of $"<< account.balance << endl;
}

void withdraw2(BankAccount& account2, double amount2)
{
    cout << "How much would you like to withdraw? ";
    cin >> amount2;
    if (amount2 > account2.balance)
    {
        cout << "Insufficient funds. Transaction cancelled.\n";
    }
    else
    {
        account2.balance -= amount2;
    }
}

void deposit2(BankAccount& account2, double amount2)
{
    cout << "How much would you like to deposit? ";
    cin >> amount2;
    account2.balance += amount2;
}

void displayAccount2(BankAccount account2)
{
    cout << account2.account << " " << account2.accountNumber << " " << "has a balance of $"<< account2.balance << endl;
}

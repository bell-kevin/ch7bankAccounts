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
double withdraw(BankAccount& account, double amount);
double deposit(BankAccount& account, double amount);
void displayAccount(BankAccount account);
double amount;

int main()
{
    cout << "Ch 7 Bank Accounts by Kevin Bell\n\n";
    BankAccount account = { "Checking", 1234, 100 }, account2 = { "Savings", 9876, 50 };
    displayAccount(account);
    cout << "How much would you like to withdraw? ";
    cin >> amount;
    withdraw(account, amount);
    cout << endl;
    displayAccount(account);
    cout << "How much would you like to deposit? ";
    cin >> amount;
    deposit(account, amount);
    cout << endl;
    displayAccount(account);
    cout << endl;
	displayAccount(account2);
	cout << "How much would you like to deposit? ";
	cin >> amount;
	deposit(account2, amount);
	cout << endl;
	displayAccount(account2);
	cout << "How much would you like to withdraw? ";
	cin >> amount;
	withdraw(account2, amount);
	cout << endl;
	displayAccount(account2);
    system("pause");
    return 0;
} //end main

double withdraw(BankAccount& account, double amount)
{
    if (amount > account.balance) // check for sufficient funds
    {
        cout << "Insufficient funds. Transaction cancelled.\n";
    }
    else
    {
        account.balance -= amount;
	} //end if
	return amount;
} //end withdraw

double deposit(BankAccount& account, double amount)
{ 
    account.balance += amount;
	return amount;
} //end deposit

void displayAccount(BankAccount account)
{
    cout << account.account << " " << account.accountNumber << " " << "has a balance of $" << account.balance << endl;
} //end displayAccount

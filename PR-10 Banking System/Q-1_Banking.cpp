#include <iostream>
#include <string.h>
using namespace std;

class BankAccount
{
    // base class : bankaccount
protected:
    char accountNumber[20];
    char accountHoderName[20];
    double balance;

public:
    BankAccount()
    {
        balance = 0;
    }

    void setAccountData()
    {
        cout << endl;
        fflush(stdin);
        cout << "Enter Account Number : ";
        gets(this->accountNumber);
        fflush(stdin);
        cout << "Enter Account Holder Name : ";
        gets(this->accountHoderName);
        cout << "Enter Original Balance : ";
        cin >> balance;
    }

    void Deposit(double amount)
    {
        balance += amount;
        cout << "Deposited : " << amount << endl;
    }

    void Withdraw(double amount)
    {
        if (amount <= balance){
            balance -= amount;
            cout << "Withdrawn : " << amount << endl;
        }
        else{
            cout << "Insufficient balance ! " << endl;
        }
    }

    double getBalance()
    {
        return balance;
    }

    virtual void getAccountData()
    {
        cout << "Account Number : " << this -> accountNumber << endl;
        cout << "Account Holder Name : " << this -> accountHoderName << endl;
        cout << "Balance : " << this -> balance << endl;
    }
};

class SavingsAccount : public BankAccount
{
    double interestRate;

public:
    void inputData()
    {
        cout << "Enter Interest Rate (%) : ";
        cin >> interestRate;
    }

    void CalculateInterest ()
    {
        double interest = balance * interestRate / 100 ;
        cout << "Saving Account Interest : " << this -> interestRate << endl;
    }
};

class CheckingAccount : public BankAccount
{
    double overdraftlimit;

public:
    void inputData()
    {
        cout << "Enter Overdraft Limit : ";
        cin >> overdraftlimit;
    }

    void CheckOverdraft(double amount)
    {
        if(amount > balance + overdraftlimit)
        cout << "Overdraft limit exceeded ! " << endl;
        else{
            cout << "Overdraft within limit. " << endl;
        }
    }
};

class FixeDeposiAccount : public BankAccount
{
    int term;

public:
    void inputData()
    {
        cout << "Enter Term (months) : ";
        cin >> term;
    }

    void calculateInterest()
    {
        double rate = 6.5;
        double interest = balance * rate * term / (100 * 12);
        cout << "Fixe Deposit Interest for " << term << " months : " << interest << endl;
    }

};



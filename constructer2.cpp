#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accountHolder;
    int accountNumber;
    double balance;
    string accountType;

public:

    // Default Constructor
    BankAccount()
    {
        accountHolder = "Not Assigned";
        accountNumber = 0;
        balance = 0.0;
        accountType = "Saving";

        cout << "Default Constructor Executed" << endl;
    }


    // Parameterized Constructor
    BankAccount(string name, int number, double amount)
    {
        accountHolder = name;
        accountNumber = number;
        balance = amount;
        accountType = "Saving";

        cout << "Parameterized Constructor Executed" << endl;
    }


    // Constructor Overloading
    BankAccount(string name, int number, double amount, string type)
    {
        accountHolder = name;
        accountNumber = number;
        balance = amount;
        accountType = type;

        cout << "Overloaded Constructor Executed" << endl;
    }


    // Copy Constructor
    BankAccount(BankAccount &obj)
    {
        accountHolder = obj.accountHolder;
        accountNumber = obj.accountNumber;
        balance = obj.balance;
        accountType = obj.accountType;

        cout << "Copy Constructor Executed" << endl;
    }


    // Deposit Function
    void deposit(double amount)
    {
        balance += amount;
        cout << amount << " deposited successfully" << endl;
    }


    // Withdraw Function
    void withdraw(double amount)
    {
        if(amount <= balance)
        {
            balance -= amount;
            cout << amount << " withdrawn successfully" << endl;
        }
        else
        {
            cout << "Insufficient Balance" << endl;
        }
    }


    // Display Function
    void display()
    {
        cout << "\n------------------------" << endl;
        cout << "Account Holder : " << accountHolder << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Type   : " << accountType << endl;
        cout << "Balance        : " << balance << endl;
        cout << "------------------------" << endl;
    }
};


int main()
{
    // Object using Default Constructor
    BankAccount account1;

    account1.display();


    // Object using Parameterized Constructor
    BankAccount account2("Harsh Singh", 10101, 50000);

    account2.display();


    // Deposit money
    account2.deposit(10000);

    account2.display();


    // Withdraw money
    account2.withdraw(15000);

    account2.display();



    // Object using Constructor Overloading
    BankAccount account3("Rohan Patel", 20202, 75000, "Current");

    account3.display();



    // Object using Copy Constructor
    BankAccount account4 = account2;

    account4.display();


    return 0;
}
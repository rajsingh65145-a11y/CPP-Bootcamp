#include <iostream>
using namespace std;

class Account {
public:
    int accountNumber;
    string name;
    double balance;

    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: Rs. " << balance << endl;
        cout << "------------------------" << endl;
    }
};

const int MAX_ACCOUNTS = 10;
Account accounts[MAX_ACCOUNTS];
int accountCount = 0;

void createAccount() {
    if (accountCount >= MAX_ACCOUNTS) {
        cout << "Cannot create more accounts. Limit reached!" << endl;
        return;
    }

    Account acc;
    cout << "Enter Account Number: ";
    cin >> acc.accountNumber;
    cout << "Enter Name: ";
    cin >> acc.name;
    cout << "Enter Initial Balance: ";
    cin >> acc.balance;

    accounts[accountCount] = acc;
    accountCount++;

    cout << "Account created successfully!" << endl;
}

int findAccount(int accNo) {
    for (int i = 0; i < accountCount; i++) {
        if (accounts[i].accountNumber == accNo) {
            return i;
        }
    }
    return -1;
}

void deposit() {
    int accNo;
    double amount;

    cout << "Enter Account Number: ";
    cin >> accNo;

    int index = findAccount(accNo);
    if (index == -1) {
        cout << "Account not found!" << endl;
        return;
    }

    cout << "Enter Amount to Deposit: ";
    cin >> amount;

    if (amount <= 0) {
        cout << "Invalid amount!" << endl;
        return;
    }

    accounts[index].balance += amount;
    cout << "Deposit successful! New Balance: Rs. " << accounts[index].balance << endl;
}

void withdraw() {
    int accNo;
    double amount;

    cout << "Enter Account Number: ";
    cin >> accNo;

    int index = findAccount(accNo);
    if (index == -1) {
        cout << "Account not found!" << endl;
        return;
    }

    cout << "Enter Amount to Withdraw: ";
    cin >> amount;

    if (amount <= 0) {
        cout << "Invalid amount!" << endl;
        return;
    }

    if (amount > accounts[index].balance) {
        cout << "Insufficient balance!" << endl;
        return;
    }

    accounts[index].balance -= amount;
    cout << "Withdrawal successful! New Balance: Rs. " << accounts[index].balance << endl;
}

void checkBalance() {
    int accNo;
    cout << "Enter Account Number: ";
    cin >> accNo;

    int index = findAccount(accNo);
    if (index == -1) {
        cout << "Account not found!" << endl;
        return;
    }

    cout << "Current Balance: Rs. " << accounts[index].balance << endl;
}

void displayAllAccounts() {
    if (accountCount == 0) {
        cout << "No accounts found!" << endl;
        return;
    }

    cout << "\n--- All Accounts ---" << endl;
    for (int i = 0; i < accountCount; i++) {
        accounts[i].display();
    }
}

int main() {
    int choice;

    do {
        cout << "\n===== Bank Management System =====" << endl;
        cout << "1. Create Account" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Check Balance" << endl;
        cout << "5. Display All Accounts" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                createAccount();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                checkBalance();
                break;
            case 5:
                displayAllAccounts();
                break;
            case 6:
                cout << "Thank you for using Bank Management System!" << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 6);

    return 0;
}

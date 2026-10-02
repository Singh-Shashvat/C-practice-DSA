#include<iostream>
using namespace std;

void greet() {
    cout << "Welcome to the ATM Website!" << endl;
}

int login() {
    int username;
    char password;

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if(username == 1 && password == '*')
        return 1;
    else
        return 0;
}

void atmTransaction(int balance) {
    int amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if(amount <= balance) {
        cout  << "Available Balance: " << balance << endl;
        cout << "Collect your cash: " << amount << endl;
        cout << "Remaining Balance : " << balance - amount << endl;
    } else {
        cout << "Insufficient balance!" << endl;
    }
}

void website() {
    greet();
    int isLoggedIn = login();
    if(isLoggedIn== 1) {
        atmTransaction(10000); 
    } else {
        cout << "Login not successful" << endl;
    }
}

int main() {
    website();
    return 0;
}
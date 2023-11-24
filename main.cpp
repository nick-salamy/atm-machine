#include <iostream>
#include <string>
#include "user.h"
using namespace std;

void showBalance(float bal) {
    cout << "Your balance is: " << bal << endl;
    return;
}

float addBalance(float bal){
    float add;
    cout << "Enter the amount you would like to deposit: ";
    cin >> add;
    bal += add;
    return bal;
}

float addWithdraw(float bal) {
    float withdraw;
    cout << "Enter the amount you would like to withdraw: ";
    cin >> withdraw;
    while(withdraw > bal){
        cout << "Insufficient Funds. Current balance is: " << bal << ". Enter new withdraw ";
        cin >> withdraw;
    }
    return bal -= withdraw;
}

int main() {
    User userOne;
    int pin, choice;
    float balance;
    string userName;
    cout << "Enter user name: ";
    cin >> userName;
    cout << "Enter pin: ";
    cin >> pin;
    while(userName != userOne.getUserName()){
        cout << "\nUser name is wrong. Please try again: ";
        cin >> userName;
    }
    while(pin != userOne.getPin()){
        cout << "\nWrong pin entered. Please try again: ";
        cin >> pin;
    }
    while(choice != 4){
        cout << "\n1. Balance\n" << "2. Deposit\n" << "3. Withdraw\n"
        << "4. Exit\n";
        cin >> choice;
        switch(choice) {
            case 1: userOne.getBalance();
            break;

            case 2: balance = addBalance(balance);
                    userOne.setBalance(balance);
                break;
            case 3: balance = addWithdraw(balance);
                    userOne.setBalance(balance);
                break;
        }
    }
}


/*int main()
{
    string userName;
    const int PASSWORD = 1111;
    int userPin;
    int choice = 0;
    float balance = 0.00;
    cout << "Hello, Please enter your name" << endl;
    getline(cin, userName);
    cout << "\nPlease enter user pin: ";
    cin >> userPin;
    while(userPin != PASSWORD){
        cout << "\nIncorrect pin, please try again: ";
        cin >> userPin;
    }
    cout << "\nWelcome, " << userName << endl;
    while(choice != 4 ) {
        cout << "\n1. Balance\n" << "2. Deposit\n" << "3. Withdraw\n"
        << "4. Exit\n";
        cin >> choice;
        switch(choice) {
            case 1: //showBalance(balance);
            break;

            case 2: balance = addBalance(balance);
                break;
            case 3: balance = withdraw(balance);
            
            /*cout << "\nEnter the amount to withdraw: ";
                    cin >> withdrawl;
                    while(withdrawl > balance){
                        cout << "Withdraw is greater than balance. Balance is: " << balance << ". Please try again: ";
                        cin >> withdrawl;
                    }
                    balance -= withdrawl;
                break;
        }

    }
    return 0;

} */

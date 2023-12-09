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
    const int NUMUSER = 10;
    // sets a default user
    User userOne("Nick", 1111);
    int pin, choice, newPin, addedUserCount;
    float balance;
    string userName, newUser;
    User users[NUMUSER];
    // assigns default user to the array of users
    users[0] = userOne;
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
    while(choice != 5){
        cout << "\n1. Balance\n" << "2. Deposit\n" << "3. Withdraw\n"
        << "4. Add New User\n" << "5. Quit\n";
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
            case 4: 
                int usersToAdd;
                cout << "How many users would you like to add? (less than 8 possible additions) ";
                cin >> usersToAdd;
                for(int i = 1; i <= usersToAdd; i++){
                    cout << "\nEnter user name: ";
                    cin >> newUser;
                    cout << "Enter user pin: ";
                    cin >> newPin;
                    User *addNewUser = new User(newUser, newPin);
                    users[i] = *addNewUser;
                    delete addNewUser;
                    addedUserCount++;
                }
                for(int i = 0; i <= addedUserCount; i++){
                    cout << endl << users[i] << endl;
                }
        }
    }
    return 0;
}

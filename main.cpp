#include <iostream>
#include <fstream>
#include <string>
#include "user.h"
#include "functions.h"
using namespace std;

int main() {
    fstream UserFile;
    const int NUMUSER = 10;
    // sets a default user
    User userOne("Nick", 1111);
    int pin, choice;
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
                addUsersToFile();
                break;
            case 5:
                cout << "Thank you, Goodbye.\n";
                break;
            default:
                cout << "\nInvalid Number. Please try again: ";
                break;
            }
        }
        return 0;
    }


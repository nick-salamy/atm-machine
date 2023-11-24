#include "user.h"

User::User(){
    pin = 1111;
    userName = "Nick";
    balance = 0.00;
}

void User::setPin(int pin) {
    this->pin = pin;
}

void User::setUserName(string userName){
    this->userName = userName;
}

void User::setBalance(float balance){
    this->balance = balance;
}

int User::getPin(){
    return pin;
}

string User::getUserName(){
    return userName;
}

void User::getBalance(){
    cout << "\nThis is your balance: " << balance << endl;
}
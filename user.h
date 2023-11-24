#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>

using namespace std;

class User {
    private:
        string userName;
        int pin;
        float balance;
    public:
        User();
        void setPin(int);
        void setUserName(std::string);
        void setBalance(float);
        int getPin();
        string getUserName(); 
        void getBalance();
};
#endif
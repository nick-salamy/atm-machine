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
        User(string, int);
        void setPin(int);
        void setUserName(std::string);
        void setBalance(float);
        int getPin();
        string getUserName(); 
        void getBalance();
        ostream& operator<<(ostream, User);
};
#endif
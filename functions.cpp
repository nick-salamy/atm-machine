#include "functions.h"
#include <fstream>

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

void addUsersToFile(){
    std::fstream UserFile;
    string newUser;
    int newPin;
    int usersToAdd;
    cout << "How many users would you like to add? (less than 8 possible additions) ";
    cin >> usersToAdd;
    for(int i = 1; i <= usersToAdd; i++){
        cout << "\nEnter user name: ";
        cin >> newUser;
        cout << "Enter user pin: ";
        cin >> newPin;
        UserFile.open("users.txt", std::ios::app);
        if(UserFile.is_open()){
            UserFile << newUser << " " << newPin << endl;
                UserFile.close();
                }
        else{
            cout << "cannot find file";
        }
}
    return;
}
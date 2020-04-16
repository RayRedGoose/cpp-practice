#include <iostream>
#include <string>
#include "users.hpp"

using namespace std;

int main() {
    string username, password, first_name, last_name;
    string full_name, acc_info;
    
    cout << "Username: ";
    getline(cin, username);
    
    cout << "Password: ";
    getline(cin, password);
    
    Users *user = new Users(username, password);
    user->set_admin(username);
    
    cout << "First Name: ";
    getline(cin, first_name);
    
    cout << "Last Name: ";
    getline(cin, last_name);
    
    user->set_first_name(first_name);
    user->set_last_name(last_name);
    
    full_name = user->get_full_name();
    acc_info = user->get_account_info();
    
    cout << "Hi, " + full_name + ". ";
    cout << "Your account is " + acc_info + ". ";
    
    delete user;
    return 0;
};

#ifndef users_hpp
#define users_hpp

#pragma once

#include <iostream>
#include <string>

using namespace std;

class Users {
    public:
        void set_username (string username);
        void set_password (string password);
        void set_first_name (string name);
        void set_last_name (string name);
        void set_admin (string username);
        string get_full_name ();
        string get_account_info ();
        
        Users(string input_username, string input_password)
        {
            username = input_username;
            password = input_password;
        }
    
        ~Users()
        {
            cout << "Memory has been cleaned.";
        }

    private:
        string username = "admin";
        string password = "1234";
        string first_name;
        string last_name;
        bool is_admin;
};

#endif /* users_hpp */

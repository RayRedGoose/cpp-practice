#include <string>
#include "users.hpp"

using namespace std;

void Users::set_username (string username)
{
    Users::username = username;
}

void Users::set_password (string password)
{
    Users::password = password;
}

void Users::set_first_name (string name)
{
    Users::first_name = name;
}

void Users::set_last_name (string name)
{
    Users::last_name = name;
}

void Users::set_admin (string username)
{
    if (Users::username == "admin") {
        Users::is_admin = true;
    } else {
        Users::is_admin = false;
    }
}

string Users::get_full_name ()
{
    return Users::first_name + " " + Users::last_name;
}

string Users::get_account_info ()
{
    if (Users::is_admin) {
        return Users::username + "(admin) / " + Users::password;
    }
    else {
        return Users::username + "(user) / " + Users::password + " /";
    }
    
}

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

bool check_username (string username) {
    string valid_name = "admin";
    return username == valid_name;
}

void check_password (string password) {
    string valid_password = "1234";
    if (password == valid_password)
        cout << "Password is valid. Welcome home, Yush!." << endl;
    else
        cout << "Password is not valid. Access is denied." << endl;
}

int main()
{
    string username, password;
    cout << "Hello! Please enter you username." << endl;
    cin >> username;
    bool correct_name = check_username(username);
    if (correct_name) {
        cout << "Username is valid. Please enter password." << endl;
        cin >> password;
        check_password(password);
    }
    else {
        cout << "Username is not valid." << endl;
    }
    return 0;
}

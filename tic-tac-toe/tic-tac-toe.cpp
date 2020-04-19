//
//  tic-tac-toe.cpp
//  Tests
//
//  Created by Raisa Primerova on 4/16/20.
//  Copyright © 2020 Raisa Primerova. All rights reserved.
//

#include <string>
#include "tic-tac-toe.hpp"

using namespace std;

void TicTacToe::start_game ()
{
    TicTacToe::user_number = 1;
}

void TicTacToe::show_board ()
{
    for (int i = 0; i < 3; i++) {
        if (i == 0) {
            cout << "     |     |     " << endl;
        }
        for (int k = 0; k < 3; k++) {
            if (k != 2) {
                cout << "  " << TicTacToe::slots[i][k] << "  |";
            }
            else {
                cout << "  " << TicTacToe::slots[i][k] << "   ";
            }
        }
        cout << " " << endl;
        if (i != 2) {
            cout << "_____|_____|_____" << endl;
        }
        cout << "     |     |     " << endl;
    }
}

int TicTacToe::get_current_user ()
{
    return TicTacToe::user_number;
}
 
void TicTacToe::change_user ()
{
    if (TicTacToe::user_number == 1)
        TicTacToe::user_number = 2;
    else
        TicTacToe::user_number = 1;
}

bool TicTacToe::check_slot(char value)
{
    return value == 'n';
}

char TicTacToe::get_slot_value (string position) {
    if (position == "a1") {
        return TicTacToe::slots[0][0];
    }
    else if (position == "a2") {
        return TicTacToe::slots[0][1];
    }
    else if (position == "a3") {
        return TicTacToe::slots[0][2];
    }
    else if (position == "b1") {
        return TicTacToe::slots[1][0];
    }
    else if (position == "b2") {
        return TicTacToe::slots[1][1];
    }
    else if (position == "b3") {
        return TicTacToe::slots[1][2];
    }
    else if (position == "c1") {
        return TicTacToe::slots[2][0];
    }
    else if (position == "c2") {
        return TicTacToe::slots[2][1];
    }
    else if (position == "c3") {
        return TicTacToe::slots[2][2];
    }
    else {
        cout << "Wrong position was chosen!";
        return 'e';
    }
}

char TicTacToe::chose_element () {
    if (TicTacToe::user_number == 1) {
        return 'x';
    }
    else {
        return 'o';
    }
}

void TicTacToe::place_element(char el, string position) {
    if (position == "a1") {
        TicTacToe::slots[0][0] = el;
    }
    else if (position == "a2") {
        TicTacToe::slots[0][1] = el;
    }
    else if (position == "a3") {
        TicTacToe::slots[0][2] = el;
    }
    else if (position == "b1") {
        TicTacToe::slots[1][0] = el;
    }
    else if (position == "b2") {
        TicTacToe::slots[1][1] = el;
    }
    else if (position == "b3") {
        TicTacToe::slots[1][2] = el;
    }
    else if (position == "c1") {
        TicTacToe::slots[2][0] = el;
    }
    else if (position == "c2") {
        TicTacToe::slots[2][1] = el;
    }
    else if (position == "c3") {
        TicTacToe::slots[2][2] = el;
    }
    else {
        cout << "Wrong position was chosen!";
    }
}

bool TicTacToe::check_winner () {
    if (TicTacToe::slots[0][0] == 'x' && TicTacToe::slots[0][1] == 'x' && TicTacToe::slots[0][1] == 'x') {
        cout << "User 1 won!";
        return true;
    }
    else if (TicTacToe::slots[0][0] == '0' && TicTacToe::slots[0][1] == '0' && TicTacToe::slots[0][1] == '0') {
        cout << "User 2 won!";
        return true;
    }
    else if (TicTacToe::slots[1][0] == 'x' && TicTacToe::slots[1][1] == 'x' && TicTacToe::slots[1][1] == 'x') {
        cout << "User 1 won!";
        return true;
    }
    else if (TicTacToe::slots[1][0] == '0' && TicTacToe::slots[1][1] == '0' && TicTacToe::slots[1][1] == '0') {
        cout << "User 2 won!";
        return true;
    }
    else if (TicTacToe::slots[2][0] == 'x' && TicTacToe::slots[2][1] == 'x' && TicTacToe::slots[2][1] == 'x') {
        cout << "User 1 won!";
        return true;
    }
    else if (TicTacToe::slots[2][0] == '0' && TicTacToe::slots[2][1] == '0' && TicTacToe::slots[2][1] == '0') {
        cout << "User 2 won!";
        return true;
    }
    else if (TicTacToe::slots[0][0] == 'x' && TicTacToe::slots[1][0] == 'x' && TicTacToe::slots[2][0] == 'x') {
        cout << "User 1 won!";
        return true;
    }
    else if (TicTacToe::slots[0][0] == '0' && TicTacToe::slots[1][0] == '0' && TicTacToe::slots[2][0] == '0') {
        cout << "User 2 won!";
        return true;
    }
    else if (TicTacToe::slots[0][1] == 'x' && TicTacToe::slots[1][1] == 'x' && TicTacToe::slots[2][1] == 'x') {
        cout << "User 1 won!";
        return true;
    }
    else if (TicTacToe::slots[0][1] == '0' && TicTacToe::slots[1][1] == '0' && TicTacToe::slots[2][1] == '0') {
        cout << "User 2 won!";
        return true;
    }
    else if (TicTacToe::slots[0][2] == 'x' && TicTacToe::slots[1][2] == 'x' && TicTacToe::slots[2][2] == 'x') {
        cout << "User 1 won!";
        return true;
    }
    else if (TicTacToe::slots[0][2] == '0' && TicTacToe::slots[1][2] == '0' && TicTacToe::slots[2][2] == '0') {
        cout << "User 2 won!";
        return true;
    }
    else if (TicTacToe::slots[0][0] == 'x' && TicTacToe::slots[1][1] == 'x' && TicTacToe::slots[2][2] == 'x') {
        cout << "User 1 won!";
        return true;
    }
    else if (TicTacToe::slots[0][0] == '0' && TicTacToe::slots[1][1] == '0' && TicTacToe::slots[2][2] == '0') {
        cout << "User 2 won!";
        return true;
    }
    else if (TicTacToe::slots[0][2] == 'x' && TicTacToe::slots[1][1] == 'x' && TicTacToe::slots[2][0] == 'x') {
        cout << "User 1 won!";
        return true;
    }
    else if (TicTacToe::slots[0][2] == '0' && TicTacToe::slots[1][1] == '0' && TicTacToe::slots[2][0] == '0') {
        cout << "User 2 won!";
        return true;
    }
    else {
        return false;
    }
}

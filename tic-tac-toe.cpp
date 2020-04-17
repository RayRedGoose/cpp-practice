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
    for (i = 0; i < 3; i++) {
        for (k = 0; k < 0; k++) {
            cout << TicTacToe::slots[i][k];
        }
    }
}

int TicTacToe::get_current_user ()
{
    return TicTacToe::user_number;
}
 
void TicTacToe::change_user ()
{
    if (TicTacToe::user_number == 1) {
        TicTacToe::user_number = 2;
    }
    else {
        TicTacToe::user_number = 1;
    }
}

char TicTacToe::get_slot_value(string position)
{
    switch (position) {
        case "a1":
            return TicTacToe::slots[0][0];
            
        case "a2":
            return TicTacToe::slots[0][1];
            
        case "a3":
            return TicTacToe::slots[0][2];
            
        case "b1":
            return TicTacToe::slots[1][0];
        
        case "b2":
            return TicTacToe::slots[1][1];
            
        case "b3":
            return TicTacToe::slots[1][2];
            
        case "c1":
            return TicTacToe::slots[2][0];
        
        case "c2":
            return TicTacToe::slots[2][1];
            
        case "c3":
            return TicTacToe::slots[2][2];
            
        default:
            cout << "Position is invalid!";
            break;
    }
}

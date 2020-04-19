//
//  main.
//  Tests
//
//  Created by Raisa Primerova on 4/13/20.
//  Copyright © 2020 Raisa Primerova. All rights reserved.
//

#include <iostream>
#include <string>
#include "tic-tac-toe.hpp"

using namespace std;

int main() {
    cout << "Welcome to Tic Tac Toe game!" << endl;
    cout << " " << endl;
    
    int user;
    string position;
    
    TicTacToe *game = new TicTacToe;
    game->start_game();
    game->show_board();
    
    user = game->get_current_user();
    
    cout << " " << endl;
    cout << "User 1 turn:" << endl;
    cin >> position;
    

    return 0;
};
    

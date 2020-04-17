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
    int user;
    TicTacToe *game = new TicTacToe;
    game->start_game();
    user = game->get_current_user();
    cout << user;
    return 0;
};
    

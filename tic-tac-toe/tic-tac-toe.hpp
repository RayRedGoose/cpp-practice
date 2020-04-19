//
//  tic-tac-toe.hpp
//  Tests
//
//  Created by Raisa Primerova on 4/16/20.
//  Copyright © 2020 Raisa Primerova. All rights reserved.
//

#ifndef tic_tac_toe_hpp
#define tic_tac_toe_hpp

#pragma once

#include <iostream>
#include <string>

using namespace std;

class TicTacToe {
    private:
        char slots[3][3] = {{'n', 'n', 'n'}, {'n', 'n', 'n'}, {'n', 'n', 'n'}};
        int user_number = 0;
    public:
        void start_game ();
        void change_user ();
        bool check_slot (char);
        char get_slot_value (string);
        int get_current_user ();
        char chose_element ();
        void place_element (char, string);
        bool check_winner ();
        void show_board ();
};

#endif /* tic_tac_toe_hpp */

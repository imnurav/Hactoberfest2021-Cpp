#include <iostream>
#include <string>

struct coord {
    int x;
    int y;
};

int choose_spot(std::string* _board, int _player, coord _pos);

int choose_spot(std::string* _board, int _player, coord _pos) {
    char c = (_player == 1)? 'X' : 'O';
    if(_pos.y > 2 || _pos.x > 2) return 0;
    if(_board[_pos.y][_pos.x] == '-') {
        _board[_pos.y][_pos.x] = c;
        return 1;
    }

    return 0;
}

void draw_board(std::string* _board) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(_board[i][j] == 'X') {
                std::cout << " \x1b[34mX\x1b[0m ";
            } else if(_board[i][j] == 'O') {
                std::cout << " \x1b[32mO\x1b[0m ";
            } else {
                std::cout << " \x1b[37m-\x1b[0m ";
            }
        }
        std::cout << std::endl;
    }
}

int main(int _argc, char** _argv) {
    std::string board[3] = {
        "---",
        "---",
        "---"
    };

    int player = 0;
    coord pos;
    while(1) {
        draw_board(board);
        if(player) {
            std::cout << "\x1b[34m";
        } else {
            std::cout << "\x1b[32m";
        }

        std::cout << "pos x: ";
        std::cin >> pos.x;
        std::cout << "pos y: ";
        std::cin >> pos.y;
        std::cout << "\x1b[0m";
        if(!choose_spot(board, player, pos)) continue;

        player = !player;
    }
    return 0;
}

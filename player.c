#include "player.h"

int player_x = 10, player_y = 10;

void display_player() {
    mvaddch(player_y, player_x, 'b');
}

void move_player(int ch) {
    switch(ch) {
        case KEY_UP:    if (player_y > 0) player_y--; break;
        case KEY_DOWN:  if (player_y < LINES - 1) player_y++; break;
        case KEY_LEFT:  if (player_x > 0) player_x--; break;
        case KEY_RIGHT: if (player_x < COLS - 1) player_x++; break;
    }
}


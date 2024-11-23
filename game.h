#ifndef GAME_H
#define GAME_H

#include "player.h"
#include "bullet.h"
#include "enemy.h"

void init_game();
int is_game_over();
void handle_input(int ch);
void update_game();
void draw_game();

#endif // GAME_H


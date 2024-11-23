#ifndef ENEMY_H
#define ENEMY_H

#include <ncurses.h>
#include <stdlib.h>
#include "utils.h"

typedef struct {
    int x, y;
} Enemy;

extern Enemy enemies[NUM_ENEMIES];

void init_enemies();
void spawn_enemy();
void move_enemies();
void display_enemies();

#endif // ENEMY_H


#ifndef ENEMY_BULLETS_H
#define ENEMY_BULLETS_H

#include <ncurses.h>

// Structure pour représenter un tir ennemi
typedef struct {
    int x, y;
    int active; // 1 si le tir est actif, 0 sinon
} EnemyBullet;

// Nombre maximum de tirs ennemis
#define NUM_ENEMY_BULLETS 10

// Déclaration des variables externes
extern EnemyBullet enemy_bullets[NUM_ENEMY_BULLETS];

// Déclaration des fonctions
void init_enemy_bullets();
void fire_enemy_bullet(int enemy_index);
void move_enemy_bullets();
void display_enemy_bullets();
void check_enemy_bullet_collisions(int player_x, int player_y, int *game_over);

#endif // ENEMY_BULLETS_H


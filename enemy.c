#include "enemy.h"

Enemy enemies[NUM_ENEMIES];

void init_enemies() {
    int i = 0;
    while (i < NUM_ENEMIES) {
        enemies[i].x = -1; // Ennemi inactif
        enemies[i].y = -1;
        i++;
    }
}

void spawn_enemy() {
    int i = 0;
    while (i < NUM_ENEMIES) {
        if (enemies[i].x == -1) { // Cherche un emplacement inactif
            enemies[i].x = COLS - 1;
            enemies[i].y = rand() % LINES;
            break;
        }
        i++;
    }
}

void move_enemies() {
    int i = 0;
    while (i < NUM_ENEMIES) {
        if (enemies[i].x >= 0) { // Ennemi actif
            enemies[i].x--;
            if (enemies[i].x < 0) { // Ennemi sorti de l'écran
                enemies[i].x = -1; // Désactiver l'ennemi
            }
        }
        i++;
    }
}

void display_enemies() {
    int i = 0;
    while (i < NUM_ENEMIES) {
        if (enemies[i].x >= 0) {
            mvaddch(enemies[i].y, enemies[i].x, 'E');
        }
        i++;
    }
}

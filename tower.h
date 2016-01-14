#ifndef TOWER_H
#define TOWER_H

#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>

#include "bg.h"

#define COUNT_TOWER 5

typedef struct tower{
    SDL_Texture* texture;
    float speed;
    int damage;
    int radius;
    int level;
    int cost;
    int x;
    int y;
    struct tower* next;
}tower;

typedef struct towerTextures{
    SDL_Texture* textureTowerOne;
    SDL_Texture* textureTowerTwo;
    SDL_Texture* textureTowerThree;
    SDL_Texture* textureTowerFour;
    SDL_Texture* textureTowerFive;
    SDL_Texture* textureTowerSix;
    SDL_Texture* textureTowerSeven;
    SDL_Texture* destroy_tower;
}towerTextures;

tower* createTower(void);
void addTower(tower**);
void createListTower(tower**);
tower* clickedOnTowerPosition(tower*, int, int);

void initTowerTextures(towerTextures* tow_textures, SDL_Renderer* Renderer);

#endif // TOWER_H
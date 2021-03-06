#ifndef GLOBAL_H
#define GLOBAL_H

#include <stdlib.h>
#include <stdio.h>

#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>

#include "main.h"
#include "init.h"
#include "wave.h"
#include "bg.h"
#include "game.h"
#include "startscreen.h"
#include "tower.h"

typedef enum GameStates{
    IN_MENU,
    START,
    IN_GAME,
    GAME_OVER,
    WIN,
    EXIT
}GameStates;



#endif // GLOBAL_H

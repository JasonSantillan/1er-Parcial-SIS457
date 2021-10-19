#pragma once
#include "GameActor.h"
class MuroVegetacion :
    public GameActor
{

    MuroVegetacion(Texture* _textura, Tile* _tileActual);

    void setTileActual(Tile* _tileNuevo);
};


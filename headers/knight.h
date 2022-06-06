#ifndef _knight_H
#define _knight_H

#include "piece.h"

class Knight:public Piece
{
private:
public:
    Knight(Colour);
    // sf::Sprite sprite;
    void load_texture();
};

#endif
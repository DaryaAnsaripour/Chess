#ifndef _pawn_H
#define _pawn_H

#include "piece.h"

class Pawn:public Piece
{
private:
public:
    Pawn(Colour);
    // sf::Sprite sprite;
    void load_texture();
};

#endif
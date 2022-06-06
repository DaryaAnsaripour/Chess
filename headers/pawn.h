#ifndef _pawn_H
#define _pawn_H

#include "piece.h"

class Pawn:public Piece
{
private:
public:
    Pawn(Colour);
    //sf::Sprite sprite;
   // sf::Texture texture;
    void load_texture();
};

#endif
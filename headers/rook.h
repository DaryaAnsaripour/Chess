#ifndef _rook_H
#define _rook_H

#include "piece.h"

class Rook:public Piece
{
private:
public:
    Rook(Colour);
    // sf::Sprite sprite;
    void load_texture();  
};

#endif
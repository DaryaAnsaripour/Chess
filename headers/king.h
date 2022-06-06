#ifndef _king_H
#define _king_H

#include "piece.h"

class King:public Piece
{
private:
public:
    King(Colour);
    // sf::Sprite sprite;
    void load_texture();
};

#endif
#ifndef _bishop_H
#define _bishop_H

#include "piece.h"

class Bishop:public Piece
{
private:
public:
    Bishop(Colour);
    // sf::Sprite sprite;
    void load_texture();
};

#endif
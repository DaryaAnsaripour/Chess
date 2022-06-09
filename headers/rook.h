#ifndef _rook_H
#define _rook_H

#include "piece.h"

class Rook:public Piece
{
private:
public:
    Rook(Colour);
    sf::Sprite sprite;
    sf::Texture texture;
    // void load_texture();  
};

#endif
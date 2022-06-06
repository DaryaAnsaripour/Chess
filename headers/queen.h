#ifndef _queen_H
#define _queen_H

#include "piece.h"

class Queen:public Piece
{
private:
public:
    Queen(Colour);
    sf::Sprite sprite;
    sf::Texture texture;
    void load_texture();
};

#endif
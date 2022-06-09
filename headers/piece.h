#ifndef _piece_H
#define _piece_H

#include "Console.h"
#include "helper.h"

class Piece
{
public:
    string name;
    Colour colour;
    sf::Sprite sprite;
    sf::Texture texture;

    Colour get_colour();
    string get_name();
    string get_piece_path();
    void load_texture();
};


struct Action
{
    Location source;
    Location destination; 
    Piece *removed;
    Action(Location,Location,Piece* removed=NULL);
};



#endif
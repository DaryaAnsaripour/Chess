#ifndef _piece_H
#define _piece_H

#include "Console.h"
#include "helper.h"

class Piece
{
protected:
    string name;
    Colour colour;
public:
    Colour get_colour();
    string get_name();
};


struct Action
{
    Location source;
    Location destination; 
    Piece *removed;
    Action(Location,Location,Piece* removed=NULL);
};



#endif
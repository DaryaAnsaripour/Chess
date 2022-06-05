#ifndef _piece_H
#define _piece_H

#include "Console.h"

class Piece
{
protected:
    string name;
    Color color;
public:
    Color get_color();
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
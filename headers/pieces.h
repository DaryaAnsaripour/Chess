#ifndef _pieces_H
#define _pieces_H

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

class Pawn:public Piece
{
private:
public:
    Pawn(Color);
};
class Rook:public Piece
{
private:
public:
    Rook(Color);   
};
class Knight:public Piece
{
private:
public:
    Knight(Color);
};
class Bishop:public Piece
{
private:
public:
    Bishop(Color);
};
class Queen:public Piece
{
private:
public:
    Queen(Color);
};
class King:public Piece
{
private:
public:
    King(Color);
};

struct Action
{
    Location source;
    Location destination; 
    Piece *removed;
    Action(Location,Location,Piece* removed=NULL);
};

#endif
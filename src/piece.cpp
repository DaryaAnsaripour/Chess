#include "../headers/piece.h"

Colour Piece::get_colour(){return colour;}
string Piece::get_name(){return name;}

Action::Action(Location from ,Location to,Piece* _removed):source(from),destination(to),removed(_removed){}


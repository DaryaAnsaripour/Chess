#include "../headers/piece.h"

Color Piece::get_color(){return color;}
string Piece::get_name(){return name;}

Action::Action(Location from ,Location to,Piece* _removed):source(from),destination(to),removed(_removed){}


#include "../headers/pieces.h"

Color Piece::get_color(){return color;}
string Piece::get_name(){return name;}

Pawn:: Pawn(Color _color){color=_color;name=PAWN;}
Rook:: Rook(Color _color){color=_color;name=ROOK;}
Knight:: Knight(Color _color){color=_color;name=KNIGHT;}
Bishop:: Bishop(Color _color){color=_color;name=BISHOP;}
Queen:: Queen(Color _color){color=_color;name=QUEEN;}
King:: King(Color _color){color=_color;name=KING;}

Action::Action(Location from ,Location to,Piece* _removed):source(from),destination(to),removed(_removed){}


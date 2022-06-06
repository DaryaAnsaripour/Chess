#include "../headers/piece.h"

Colour Piece::get_colour(){return colour;}
string Piece::get_name(){return name;}
string Piece::get_piece_path()
{
    string path = "texture/"; 
    path += ((this->get_colour()== BLACK) ? "b_" : "w_");
    path +=(this->get_name());
    return path + ".png";
}

Action::Action(Location from ,Location to,Piece* _removed):source(from),destination(to),removed(_removed){}
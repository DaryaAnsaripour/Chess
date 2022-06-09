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
void Piece:: load_texture()
{
    this->texture.loadFromFile(this->get_piece_path());
    this->sprite.setTexture(texture);
    float piece_scale_x = 100.f / this->sprite.getTexture()->getSize().x;
    float piece_scale_y = 100.f / this->sprite.getTexture()->getSize().y;
    this->sprite.setScale(piece_scale_x, piece_scale_y);
}
Action::Action(Location from ,Location to,Piece* _removed):source(from),destination(to),removed(_removed){}
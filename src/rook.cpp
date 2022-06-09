#include "../headers/rook.h"
Rook:: Rook(Colour _colour)
{
    colour=_colour;name=ROOK;
    this->load_texture();
}
// void Rook:: load_texture()
// {
//     cout<<"loaded\n";
//     this->texture.loadFromFile("texture/b_bishop.png");
//     // cout<<texture.getSize().x<<'\n';
//     this->sprite.setTexture(texture);
//     // cout<<texture.getSize().x<<'\n';
//     // float piece_scale_x = 100.f / this->sprite.getTexture()->getSize().x;
//     // float piece_scale_y = 100.f / this->sprite.getTexture()->getSize().y;
//     // this->sprite.setScale(piece_scale_x, piece_scale_y);
// }
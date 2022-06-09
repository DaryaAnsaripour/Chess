#include "../headers/bishop.h"
Bishop:: Bishop(Colour _colour)
{
    colour=_colour;name=BISHOP;
    this->load_texture();
}

#ifndef _cell_H
#define _cell_H

#include "Console.h"

// struct setting
// {
//     const int cell_size=100;
//     const int cell_offset=0;
//     const sf::Color cell_colour;
//     const int line_space=0;
// };

class Cell
{
public:
    sf::RectangleShape rect;
    CellStatus cell_status = EMPTY;
};

typedef typename std::vector<std::vector<Cell>> Cells;

#endif
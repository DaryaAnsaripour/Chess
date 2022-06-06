#pragma once

#include <bits/stdc++.h>
#include <SFML/Graphics.hpp>
using namespace std;
#define EIGHT 8
#define PAWN "pawn"
#define ROOK "rook"
#define KNIGHT "knight"
#define BISHOP "bishop"
#define QUEEN "queen" 
#define KING "king"
enum Colour{WHITE,BLACK};
enum Position{MATE,DEFENCE};
enum CellStatus{EMPTY,OCCUPIED};
#define opposite(colour) colour==WHITE?BLACK:WHITE
typedef pair<int,int> Location;
typedef pair<int,int> Direction;

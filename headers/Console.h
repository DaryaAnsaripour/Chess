#pragma once

#include <bits/stdc++.h>
using namespace std;
#define EIGHT 8
#define PAWN "pawn"
#define ROOK "rook"
#define KNIGHT "knight"
#define BISHOP "bishop"
#define QUEEN "queen" 
#define KING "king"
enum Color{WHITE,BLACK};
enum Position{MATE,DEFENCE};
#define opposite(color) color==WHITE?BLACK:WHITE
typedef pair<int,int> Location;
typedef pair<int,int> Direction;

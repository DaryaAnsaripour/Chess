#include "../headers/chessBoard.h"
using namespace sf;

int main()
{
    RenderWindow window(VideoMode(1000, 900), "chess",Style::Titlebar | Style::Close);
    try
    {
    Chess chess(&window);
    chess.run();
    }
    catch(char const* s)
    {
        std::cerr<< s << '\n';
    }
    
}
#ifndef _chessBoard_H
#define _chessBoard_H

#include "Console.h"
#include "king.h"
#include "queen.h"
#include "knight.h"
#include "bishop.h"
#include "rook.h"
#include "pawn.h"
#include "cell.h"
#include "helper.h"

class Chess
{
    vector<Action> history;
    vector<vector<Piece *>> board;
    void default_initiator();
    void init();
    bool is_free(Location);
    bool is_in_board(Location);
    bool is_friend(Location me,Location target);
    string location2str(Location);
    Colour turn;
    vector<Location> get_valid_moves(Location);
    Piece* get_piece(Location);
    Action* take_action_from_CL(string);
    Location str2location(string);
    Location go_forward(Location,Direction);
    void go_through(vector<Location>& ,Location,Direction,int max_depth=8);
    Location get_king(Colour);
    bool is_check(Colour);
    bool is_checkmate(Colour);
    vector<Action> get_all_possible_moves(Colour);
    Action make_action_from_CL(string);
    bool action_is_valid(Action );
    void action_handler(Action );
    Piece* free_up(Location );
    void put_piece(Piece *,Location);
    void change_turn(){turn=(turn==WHITE?BLACK:WHITE);}
    
    vector<Location> get_under_attack_fields(Colour);
    vector<Action> get_all_valid_moves(Colour);
    void do_action(Action);
    void undo_action();

    vector<Action> func(Colour c);
    vector<Action> func2(Colour c);
    vector<Action> get_valid_actions_for_a_piece(Location);
    bool is_mate_possible(Colour c);
    bool is_not_mate_possible(Colour c);

    void show_ezterari(Colour,Position);
    string colour_generator(Piece* m);
    string name_generator(Piece* m);
    string show_shortname(Piece* m);

    public:
    Chess(sf::RenderWindow* _window);
    sf::RenderWindow* window;
    Cells cells;
    sf::Font font;
    sf::Text status_text;
    bool end;

    void graph_init();
    // sf::Vector2f get_cell_position(int row,int column);
    void update_status_text();
    void draw();
    void run();
    void mouse_clicked(const sf::Vector2i& position);
    void cell_empty_clicked(int row, int column);
    void put_piece_in_cell(int row, int column);
    // void check_end();

    void show_board();
};


#endif
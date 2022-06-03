#ifndef _chessBoard_H
#define _chessBoard_H

#include "Console.h"
#include "pieces.h"

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
    Color turn;
    vector<Location> get_valid_moves(Location);
    Piece* get_piece(Location);
    Action* take_action_from_CL(string);
    Location str2location(string);
    Location go_forward(Location,Direction);
    void go_through(vector<Location>& ,Location,Direction,int max_depth=8);
    Location get_king(Color);
    bool is_check(Color);
    bool is_checkmate(Color);
    vector<Action> get_all_possible_moves(Color);
    Action make_action_from_CL(string);
    bool action_is_valid(Action );
    void action_handler(Action );
    Piece* free_up(Location );
    void put_piece(Piece *,Location);
    void change_turn(){turn=(turn==WHITE?BLACK:WHITE);}
    
    vector<Location> get_under_attack_fields(Color);
    vector<Action> get_all_valid_moves(Color);
    void do_action(Action);
    void undo_action();

    vector<Action> func(Color c);
    vector<Action> func2(Color c);
    vector<Action> get_valid_actions_for_a_piece(Location);
    bool is_mate_possible(Color c);
    bool is_not_mate_possible(Color c);

    void show_ezterari(Color,Position);
    string color_generator(Piece* m);
    string name_generator(Piece* m);
    string show_shortname(Piece* m);

    public:
    Chess();
    void show_board();
};


#endif
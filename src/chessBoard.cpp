#include "../headers/chessBoard.h"

Chess::Chess(sf::RenderWindow* _window) : window(_window), board(vector<vector<Piece *>>(EIGHT, vector<Piece *>(EIGHT, NULL)))
{
    default_initiator();
    
    // string order;cin>>order;
    // turn=order[0]=='B'?BLACK:WHITE;
    // if(order[0]=='B')
    //     turn=BLACK;
    // else if(order[0]=='W')
    //     turn=WHITE;
    // else throw "ERROR IN READING COLOR";
    // Position p;
    // if(order[1]=='M')
    //     p=MATE;
    // else if(order[1]=='D')
    //     p=DEFENCE;
    // else throw "ERROR IN READING COLOR";
    // init();
    // show_board();
    // show_ezterari(turn,p);    
}

void Chess::graph_init()
{
    end = false;
    this->cells.resize(8);
    for (int row = 0; row < 8; row++)
    {
       this->cells[row].resize(8);
        for (int column = 0; column < 8; column++)
        {
            cells[row][column].rect.setSize(sf::Vector2f(100, 100));
            if ((column+row)%2)
                cells[row][column].rect.setFillColor(sf::Color::Black);
            else
                cells[row][column].rect.setFillColor(sf::Color::White);

            cells[row][column].rect.setPosition(get_cell_position(row, column));
        }
    }
    for(int i=0; i<2; i++)
        for(int j=0; j<8; j++)
            cells[i][j].cell_status=OCCUPIED;
    for(int i=6; i<8; i++)
        for(int j=0; j<8; j++)
            cells[i][j].cell_status=EMPTY;
    for(int i=2; i<6; i++)
        for(int j=0; j<8; j++)
            cells[i][j].cell_status=OCCUPIED;
    turn=WHITE;
    font.loadFromFile("texture/arial.ttf");
    status_text.setFont(font);
    status_text.setCharacterSize(30);
    status_text.setStyle(sf::Text::Regular);
    status_text.setFillColor(sf::Color::Black);
    status_text.setPosition(840.f, 80.f);
    update_status_text();
}





void Chess::run()
{
    graph_init();
    window->display();
    while (window->isOpen()) {
        sf::Event event;

        while (this->window->pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                this->window->close();
            }
            if (!this->end && sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
                this->mouse_clicked(sf::Mouse::getPosition(*(this->window)));
            }
        }
        window->clear(sf::Color(150, 150, 150));
        update_status_text();
        draw();
        window->display();
    }
}


void Chess::cell_empty_clicked(int row, int column)
{
    // put_piece_in_cell(row, column);
    // this->end = this->curr_user->check_win(this->cells);
    // if (this->end)
    //     return;
    // change_turn();
}

void Chess::put_piece_in_cell(int row, int column)
{
    // XO* xo = new XO(this->curr_user->id);
    // xo->sprite.setPosition(this->cells[row][column].rect.getPosition());
    // this->cells[row][column].xo = xo;
    // this->cells[row][column].cell_status = OCCUPIED;
}


void Chess::mouse_clicked(const sf::Vector2i& position)
{   
    int row = get_cell_index(position.y), column = get_cell_index(position.x);
    if (row == -1 || column == -1)
        return;
    if (this->cells[row][column].cell_status == EMPTY)
        this->cell_empty_clicked(row, column);
}

void Chess::update_status_text()
{
    string t;
    t=(turn)? "Black":"White";
    if (this->end)
        status_text.setString(t + " Wins!");
    else
        status_text.setString("Turn:\n" + t );
}

void Chess::draw()
{
    // sf::Texture test;
    // test.loadFromFile("texture/b_bishop.png");
    // cout<<this->board[0][0]->texture.getSize().x<<"\n";
    // cout<<"salam";
    for (int row = 0; row < 8; row++)
        for (int column = 0; column < 8; column++)
        {
            this->window->draw(this->cells[row][column].rect);
            if (this->cells[row][column].cell_status == OCCUPIED)
            {
                // string lte="texture/b_king.png";
                // sf::Texture te;
                // te.sf::Texture::loadFromFile(lte);
                
                // sf::Sprite sprite;
                // sprite.sf::Sprite::setTexture(te);
                // float piece_scale_x = 100.f / sprite.getTexture()->getSize().x;
                // float piece_scale_y = 100.f / sprite.getTexture()->getSize().y;
                // sprite.sf::Sprite::setScale(piece_scale_x, piece_scale_y);

                // this->window->draw(sprite);
                // this->board[0][0]->sprite.setPosition(10,10);
                // this->window->draw(this->board[1][0]->sprite);
                cout<<board[row][column]->sprite.getTexture();
            }
        }
    // test.loadFromFile("texture/b_bishop.png");
    // this->board[0][0]->sprite.setTexture(test);
    // this->window->draw(this->board[0][0]->sprite);
    this->window->draw(this->status_text);
}







void Chess::show_ezterari(Colour c,Position p)
{
    vector<vector<Action>> y;
    vector<Action> o;
    if(p==MATE)
        o=func2(c);
    else if(p==DEFENCE)
        o=func(c);

    for(auto a:o)
    {
        if(y.size()==0 || y.back().back().source!=a.source)
        {
            vector<Action> last;
            last.push_back(a);
            y.push_back(last);
        }
        else
            y.back().push_back(a);
    }
    if(y.size())
    {
        if(p==DEFENCE)
        for(auto v:y)
        {
            cout<<location2str(v.back().source)<<show_shortname(get_piece(v.back().source));
            if(get_valid_actions_for_a_piece(v.back().source).size()>v.size())
                for(auto a:v)
                    cout<<location2str(a.destination);
            cout<<endl;
        }
        else
        for(auto v:y)
        {
            if(get_valid_actions_for_a_piece(v.back().source).size()>v.size())
                for(auto a:v)
                    cout<<location2str(v.back().source)<<show_shortname(get_piece(v.back().source))<<location2str(a.destination)<<endl;
        }

    }
    else
    {
        cout<<"No Answer!\n";
    }
}

vector<Action> Chess::get_valid_actions_for_a_piece(Location from)
{
    vector<Action> valid_actions;
    auto x=get_valid_moves(from);
    for(auto to:x)
    {
        auto new_action=Action(from,to);
        if(action_is_valid(new_action))
            valid_actions.push_back(new_action);
    }
    return valid_actions;
}
vector<Action> Chess::func2(Colour c)
{
    vector<Action> x;
    for(auto move:get_all_valid_moves(c))
    {
        do_action(move);
        if(is_checkmate(opposite(c)))
        {
            undo_action();
            x.push_back(move);
            continue;
        }
        if(!is_not_mate_possible(opposite(c)))
            x.push_back(move);

        undo_action();
    }
    // cout<<x.size();
    return x;
}
vector<Action> Chess::func(Colour c)
{
    vector<Action> x;
    for(auto move10:get_all_valid_moves(c))
    {
        do_action(move10);
        if(is_mate_possible(opposite(c)))
        {
            // cout<<location2str(move10.source)<<"-->"<<location2str(move10.destination)<<endl;
            undo_action();
            x.push_back(move10);
            continue;
        }
        for(auto move11:get_all_valid_moves(opposite(c)))
        {
            do_action(move11);
            if(!is_not_mate_possible(c))
            {
                undo_action();
                x.push_back(move10);
                break;
            }
            undo_action();
        }
        undo_action();
    }
    return x;
}
bool Chess::is_mate_possible(Colour c)
{
    for(auto move:get_all_valid_moves(c))
    {
        do_action(move);
        if(is_checkmate(opposite(c)))
        {
            undo_action();
            return true;
        }
        undo_action();
    }
    return false;
}
bool Chess::is_not_mate_possible(Colour c)
{
    for(auto move:get_all_valid_moves(c))
    {
        do_action(move);
        if(!is_mate_possible(opposite(c)))
        {
            undo_action();
            return true;
        }
        undo_action();
    }
    return false;
}
vector<Action> Chess::get_all_valid_moves(Colour colour)
{
    vector<Action> valid_actions;
    for(auto action:get_all_possible_moves(colour))
        if(action_is_valid(action))
            valid_actions.push_back(action);
    return valid_actions;
}
bool Chess::action_is_valid(Action action)
{
    do_action(action);
    bool validation=is_check(get_piece(action.destination)->get_colour())? false:true;
    undo_action();
    return validation;
}
void Chess::do_action(Action action)
{
    if(get_piece(action.source)==NULL) throw "ERROR IN SELECTING MARBLE";
    action.removed=free_up(action.destination);
    put_piece(free_up(action.source),action.destination);
    history.push_back(action);
}
void Chess::undo_action()
{
    Action action = history.back();
    put_piece(free_up(action.destination),action.source);
    put_piece(action.removed,action.destination);
    history.pop_back();
}
vector<Location> Chess::get_valid_moves(Location location)
{
    auto m=get_piece(location);
    vector<Location> valid_moves;
    if(m==NULL)
        throw "no piece";
    else if (m->get_name() == PAWN)
    {
        int direction=m->get_colour()==WHITE? 1:-1;
        Location forward(location.first,location.second+direction);
        if(is_in_board(forward) && is_free(forward))
        {
            valid_moves.push_back(forward);
            if(location.second==(m->get_colour()==WHITE?1:6))
            {
                Location forward2(location.first,location.second+2*direction);
                if(is_in_board(forward2) && is_free(forward2))
                valid_moves.push_back(forward2);
            }
        }
        for(int j:{-1,1})
        {
            Location target(location.first+j,location.second+direction);
            if(is_in_board(target) && !is_free(target) && !is_friend(location,target))
            {
                valid_moves.push_back(target);

            }
        }
    }
    else if (m->get_name() == ROOK)
    {
        for(int i:{-1,1})
            for(int j:{-1,1})
                go_through(valid_moves,location,Direction((i-j)/2,(i+j)/2));
    }
    else if (m->get_name() == KNIGHT)
    {
        for(int dy:{1,-1})
            for(int dx:{-1,1})
            {
                go_through(valid_moves,location,Direction(2*dx,dy),1);
                go_through(valid_moves,location,Direction(dx,2*dy),1);
            } 
    }
    else if (m->get_name() == BISHOP)
    {
        for(int dy:{1,-1})
            for(int dx:{-1,1})
                go_through(valid_moves,location,Direction(dx,dy));
    }
    else if (m->get_name() == QUEEN)
    {
        for(int dx=-1;dx<=1;dx++)
            for(int dy=-1;dy<=1;dy++)
            {
                if(!(dx|dy)) continue;
                go_through(valid_moves,location,Direction(dx,dy));
            }
    }
    else if (m->get_name() == KING)
    {
        for(int dx=-1;dx<=1;dx++)
            for(int dy=-1;dy<=1;dy++)
            {
                if(!(dx|dy)) continue;
                go_through(valid_moves,location,Direction(dx,dy),1);
            }
    }
    return valid_moves;
}
bool Chess::is_check(Colour colour)
{
    vector<Location> under_attack_fields=get_under_attack_fields(colour);
    return find(under_attack_fields.begin(),under_attack_fields.end(),get_king(colour))!=under_attack_fields.end();;
}
bool Chess::is_checkmate(Colour colour)
{
    return get_all_valid_moves(colour).size()==0 && is_check(colour);
}
Action Chess::make_action_from_CL(string request)
{
    if(request.size()!=4) throw "ERROR IN INPUT";
    return Action(str2location(request.substr(0,2)),str2location(request.substr(2,2)));
}
Piece* Chess::free_up(Location location)
{
    Piece* piece=board[location.first][location.second];
    board[location.first][location.second]=NULL;
    return piece;
}
void Chess::put_piece(Piece * piece,Location location)
{
    board[location.first][location.second]=piece;
}

vector<Location> Chess::get_under_attack_fields(Colour colour)
{
    vector<Location> under_attack_field;
    for(auto action :get_all_possible_moves(colour==WHITE?BLACK:WHITE))
        under_attack_field.push_back(action.destination);
    return under_attack_field;
}
vector<Action> Chess::get_all_possible_moves(Colour colour)
{
    vector<Action> accessable_moves;
    Location location;
    for(int i=0;i<EIGHT;i++)
        for(int j=0;j<EIGHT;j++)
        {
            location=Location(i,j);
            if(!is_free(location))
            {
                auto piece = get_piece(location);
                if(piece->get_colour()==colour)
                {
                    for(auto move:get_valid_moves(location))
                    {
                        accessable_moves.push_back(Action(location,move));
                    }
                }
            }
        }
    return accessable_moves;
}
Location Chess::get_king(Colour colour)
{
    Location l;
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
        {
            l=Location(i,j);
            if(!is_free(l))
            {
                auto piece = get_piece(l);
                if(piece->get_name()==KING && piece->get_colour()==colour)
                    return l;
            }
        }
    throw "KING NOT FOUND";
    return l;
}
string Chess::colour_generator(Piece* m)
{
    return m->get_colour()==WHITE? "W":"B";
}
string Chess::name_generator(Piece* m)
{
        string name;
        if (m==NULL)
            throw "ERROR";
        else if (m->get_name() == PAWN)
            name="P";
        else if (m->get_name() == ROOK)
            name="R";
        else if (m->get_name() == KNIGHT)
            name="N";
        else if (m->get_name() == BISHOP)
            name="B";
        else if (m->get_name() == QUEEN)
            name="Q";
        else if (m->get_name() == KING)
            name="K";
        return name;
};
string Chess::show_shortname(Piece* m)
{
    return name_generator(m)+colour_generator(m);
}
void Chess::show_board()
{
    // cout<<"\tTurn: "<<(turn==WHITE?"WHITE":"BLACK")<<endl;
    for (int j = 7; j >= 0; j--)
    {
        //to debug
        cout<<j+1<<" ";
        //---------

        for (int i = 0; i < EIGHT; i++)
        {
            if (board[i][j] == NULL)
                cout << "--";
            else 
                cout<<show_shortname(get_piece(Location(i,j)));
            cout << " ";
        }
        cout<<endl;
    }
    
    //to debug
    cout<<"  ";
    for(int i=0;i<8;i++) cout<<char('a'+i)<<"  ";
    cout<<endl;
    //----------
}
void Chess::go_through(vector<Location>& valid_moves,Location location,Direction direction,int max_depth)
{
    
    for(Location target=go_forward(location,direction);max_depth && is_in_board(target);target=go_forward(target,direction),max_depth--)
    {
        if(!is_free(target))
        {
            if(!is_friend(location,target))
                valid_moves.push_back(target);
            break;
        }
        valid_moves.push_back(target);
    }
}
Location Chess::go_forward(Location l,Direction d)
{
    return Location(l.first+d.first,l.second+d.second);
}
bool Chess::is_free(Location l)
{
    return board[l.first][l.second]==NULL;
}
bool Chess::is_in_board(Location l)
{
    return (0<=l.first && l.first<EIGHT && 0<=l.second && l.second<EIGHT);
}
bool Chess::is_friend(Location me,Location target)
{
    // cout<<turn<<'\t';
    return get_piece(me)->get_colour()==get_piece(target)->get_colour();
}
Piece* Chess::get_piece(Location l)
{
    return board[l.first][l.second];
}
Location Chess::str2location(string s)
{
    return Location(s[0]-'a',s[1]-'1');
}
string Chess::location2str(Location l)
{
    string s=to_string(l.second+1);
    return char('a'+(l.first))+s;
}
Action* Chess::take_action_from_CL(string action)
{
    Action* a=new Action(str2location(action.substr(0,2)),str2location(action.substr(4,2)),get_piece(str2location(action.substr(2,2))));
    // a->source=str2location(action.substr(0,2));
    // a->piece=get_piece(str2location(action.substr(2,2)));
    // a->destination=str2location(action.substr(4,2));
    // if (a->piece==NULL) throw "ERROR IN SELECTING MARBLE";
    return a;
}
void Chess::init()
{
    string s;
    for (int j = 0; j < EIGHT; j++)
        for (int i = 0; i < EIGHT; i++)
        {
            cin>>s;
            if(s=="--")
                board[i][7-j]=NULL;
            else
            {
                Colour colour=(s[1]=='W'? WHITE:BLACK);
                if(s[0]=='P')
                    board[i][7-j]=new Pawn(colour);
                else if(s[0]=='R')
                    board[i][7-j]=new Rook(colour);
                else if(s[0]=='N')
                    board[i][7-j]=new Knight(colour);
                else if(s[0]=='B')
                    board[i][7-j]=new Bishop(colour);
                else if(s[0]=='Q')
                    board[i][7-j]=new Queen(colour);
                else if(s[0]=='K')
                    board[i][7-j]=new King(colour);
                else throw "ERROR IN READING MARBLE";
            }
        }
}
void Chess::default_initiator()
{
    // turn=WHITE;
    for (int i = 0; i < EIGHT; i++)
    {
        board[1][i]=new Pawn(WHITE);
        board[6][i]=new Pawn(BLACK);
    }
    board[0][0]=new Rook(WHITE);board[0][7]=new Rook(WHITE);
    board[7][0]=new Rook(BLACK);board[7][7]=new Rook(BLACK);
    board[0][1]=new Knight(WHITE);board[0][6]=new Knight(WHITE);
    board[7][1]=new Knight(BLACK);board[7][6]=new Knight(BLACK);
    board[0][2]=new Bishop(WHITE);board[0][5]=new Bishop(WHITE);
    board[7][2]=new Bishop(BLACK);board[7][5]=new Bishop(BLACK);
    board[0][3]=new Queen(WHITE);board[7][3]=new Queen(BLACK);
    board[0][4]=new King(WHITE);board[7][4]=new King(BLACK);
}
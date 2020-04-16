//h
#ifndef TICTACTOE_H
#define TICTACTOE_H
#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::cin; using std::string; using std::vector;

class TicTacToe 
{
public:
	TicTacToe(int size) : pegs(3*3, " ") {}
	bool game_over();
	void start_game(string first_player);
	void mark_board(int position);
	string get_player()const { return player; }
	string get_winner()const { return winner; }
	friend std::ostream& operator<<(std::ostream& out, const TicTacToe& a);
	friend std::istream& operator>>(std::istream& in, TicTacToe& a);

protected:
	vector<string> pegs{ 9, " " };
	virtual bool check_column_win();
	virtual bool check_row_win();
	virtual bool check_diagonal_win();

private:
	void set_next_player();
	bool check_board_full();
	void clear_board();
	void set_winner();
	string player;
	string winner;
	
};

#endif // TICTACTOE_H

#ifndef INVALID_H
#define INVALID_H

class Invalid 
{
public:
	Invalid(std::string msg) : message{msg} {}
	string get_error()const { return message; }

private:
	string message;
};

#endif // !INVALID_H
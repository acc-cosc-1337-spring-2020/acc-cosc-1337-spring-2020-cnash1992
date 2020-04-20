//h
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include <string>
#include <vector>
#include<iostream>

class TicTacToe
{
public:
	TicTacToe(int size) : pegs(size*size, " ") {}
	bool game_over();
	void start_game(std::string first_player);
	void mark_board(int position);
	std::string get_player() const { return player; }
	std::string get_winner()const { return winner; }
	friend std::ostream& operator<<(std::ostream& out, const TicTacToe& t);
	friend std::istream& operator>>(std::istream& in, TicTacToe& t);
protected:
	virtual bool check_column_win();
	virtual bool check_row_win();
	virtual bool check_diagonal_win();
	std::vector<std::string> pegs;

private:
	void set_next_player();
	bool check_board_full();
	void clear_board();
	void set_winner();
	std::string player;
	std::string winner;
};

class Error
{
public:
	Error(std::string msg) : message{ msg } {};
	std::string get_message()const { return message; };
private:
	std::string message;
};

#endif // !TIC_TAC_TOE_H
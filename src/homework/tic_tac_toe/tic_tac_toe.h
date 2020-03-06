//h
#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::cin; using std::string; using std::vector;

class TicTacToe 
{
public:
	void start_game(string first_player);
	void mark_board(int position);
	string get_player()const { return player; }

private:
	void set_next_player();
	string player;
};

class Invalid 
{
public:
	Invalid(std::string msg) : message{msg} {}
	string get_error()const { return message; }

private:
	string message;
};
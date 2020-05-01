//h
#include "tic_tac_toe.h"
#include <fstream>

class TicTacToeData : TicTacToe 
{
public:
	void save_games(const std::vector<std::unique_ptr<TicTacToe>>& games);
	std::vector<std::unique_ptr<TicTacToe>> get_games();
private:
	const std::string games_data;
};

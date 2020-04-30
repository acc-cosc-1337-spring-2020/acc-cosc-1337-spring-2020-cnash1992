//h
#include "tic_tac_toe.h"
#include <fstream>

class TicTacToeData : TicTacToe 
{
public:
	void save_games(const std::vector<std::unique_ptr<TicTacToe>>& games);


private:
	const std::string games_data;
};

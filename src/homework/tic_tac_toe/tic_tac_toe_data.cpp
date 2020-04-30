#include "tic_tac_toe_data.h"

//cpp

void TicTacToeData::save_games(const std::vector<std::unique_ptr<TicTacToe>>& games)
{
	std::ofstream file_out(games_data, std::ios_base::trunc);

	for (auto &game : games) 
	{
		for (auto &ch : games) 
		{
			file_out << ch;
		}
	}

	file_out.close();
}

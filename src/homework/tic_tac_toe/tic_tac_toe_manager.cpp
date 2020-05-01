#include "tic_tac_toe_manager.h"

//cpp


/*
TicTacToeManager::TicTacToeManager(TicTacToeData & data)
{
	data.get_games();
	for (auto &game : data.get_games) 
	{
		update_winner_count(data.get_winner);
	}
}
*/

void TicTacToeManager::save_game(unique_ptr<TicTacToe>& game)
{
	update_winner_count(game->get_winner());
	games.push_back(std::move(game));
}

TicTacToeManager::~TicTacToeManager()
{
	TicTacToeData* saved_game;
	saved_game->save_games;
}

void TicTacToeManager::update_winner_count(std::string winner)
{
	if (winner == "X") 
	{
		x_wins++;
	}
	else if(winner == "O") 
	{
		o_wins++;
	}
	else 
	{
		ties++;
	}
}

std::ostream & operator<<(std::ostream & out, const TicTacToeManager & m)
{
	out << "\n";
	for (auto &game : m.games) 
	{
		out << *game <<"\n";
	}

	out << "\nO wins: " << m.o_wins<<"\n";
	out << "X wins: " << m.x_wins<<"\n";
	out << "Ties: " << m.ties<<"\n";

	return out;
}

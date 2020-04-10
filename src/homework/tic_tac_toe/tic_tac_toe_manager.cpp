#include "tic_tac_toe_manager.h"

//cpp

void TicTacToeManager::save_game(const TicTacToe b)
{
	
	games.push_back(b);
	//update_winner_count();

}

void TicTacToeManager::get_winner_total(int & o, int & x, int & t)
{
	cout <<"X wins: "<< x_wins << "\n";
	cout <<"O wins: " << o_wins << "\n";
	cout <<"ties: " << ties << "\n";

}

void TicTacToeManager::update_winner_count(string winner)
{
	if (winner == "X") 
	{
		x_wins+=1;
	}

	else if (winner == "O") 
	{
		o_wins += 1;
	}
	else 
	{
		ties += 1;
	}
}

std::ostream & operator<<(std::ostream & out, const TicTacToeManager & manager)
{
	for (auto game : manager.games) 
	{
		
		manager.get_winner();
	}
	
	return out;
}

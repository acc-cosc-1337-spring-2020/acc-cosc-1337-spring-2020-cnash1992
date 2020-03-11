#include "tic_tac_toe.h"


//cpp

void TicTacToe::start_game(string first_player)
{
	if (first_player == "X" || first_player == "O") 
	{
		player = first_player;
		
	}

	else
	{
		throw Invalid("Invalid Character! Player Must use only X or O.");
	}

	clear_board();
}

void TicTacToe::mark_board(int position)
{
	if (position < 1 || position > 9) 
	{
		throw Invalid("Position must be between 1 and 9.");
	}

	else if (player == "") 
	{
		throw Invalid(" Must start game first.");
	}
	 
	pegs[position - 1] = player;
	set_next_player();

}

void TicTacToe::display_board() const
{
	for (int i = 0; i < 9; i+=3)
	{
		cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n";
	}
}

void TicTacToe::set_next_player()
{
	
	if (player == "X") 
	{
		player = 'O';
	}

	else 
	{
		player = 'X';
	}
}

bool TicTacToe::check_board_full()
{
	for (std::size_t i = 0; i < pegs.size(); ++i) 
	{
		if (pegs[i] == " ") 
		{
			return false;
		}
	}
	
	return true;
}

void TicTacToe::clear_board()
{
	for (auto &peg : pegs) 
	{
		peg = " ";
	}
}

bool TicTacToe::game_over()
{
	
	return check_board_full();
}

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

	if (game_over() == false) 
	{
		set_next_player();
	}
	 
	pegs[position - 1] = player;
	//set_next_player();

}

/*
void TicTacToe::display_board() const
{
	for (int i = 0; i < 9; i+=3)
	{
		cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n";
	}
}
*/


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

bool TicTacToe::check_column_win()
{
	if (pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X") 
	{
		return true;
	}

	else if (pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X")
	{
		return true;
	}

	else if(pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X")
	{
		return true;
	}
	
	else if (pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O")
	{
		return true;
	}

	else if (pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O")
	{
		return true;
	}

	else if (pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O")
	{
		return true;
	}

	else 
	{
		return false;
	}

}

bool TicTacToe::check_row_win()
{
	if (pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X")
	{
		return true;
	}

	else if (pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X")
	{
		return true;
	}

	else if (pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X")
	{
		return true;
	}

	else if (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O")
	{
		return true;
	}

	else if (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O")
	{
		return true;
	}

	else if (pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")
	{
		return true;
	}

	else
	{
		return false;
	}
}

bool TicTacToe::check_diagonal_win()
{
	if (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X")
	{
		return true;
	}

	else if (pegs[2] == "X" && pegs[4] == "X" && pegs[6] == "X")
	{
		return true;
	}

	else if (pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O")
	{
		return true;
	}

	else if (pegs[2] == "O" && pegs[4] == "O" && pegs[6] == "O")
	{
		return true;
	}

	else
	{
		return false;
	}
}

void TicTacToe::set_winner()
{
	if (player == "X") 
	{
		winner = "O";
	}

	else 
	{
		winner = "X";
	}
}

bool TicTacToe::game_over()
{
	check_row_win();
	check_column_win();
	check_diagonal_win();
	check_board_full();

	if (check_row_win() == true || check_column_win() == true || check_diagonal_win() == true) 
	{
		return true;
	}

	else if (check_row_win() == false || check_column_win() == false || check_diagonal_win() == false)
	{
		winner = "C";
	}

	if (check_board_full() == true && winner == "C") 
	{
		return true;
	}

	else if (check_board_full() == false && winner == "C") 
	{
		return false;
	}

	else 
	{
		return true;
	}
	
}

std::ostream & operator<<(std::ostream & out, const TicTacToe & a)
{
	for (auto &peg : a.pegs)
	{
		out << peg[0] << "|" << peg[1] << "|" << peg[2] << "\n";
		out << peg[3] << "|" << peg[4] << "|" << peg[5] << "\n";
		out << peg[6] << "|" << peg[7] << "|" << peg[8] << "\n";
	}
	
	return out;
}

std::istream & operator>>(std::istream & in, TicTacToe & a)
{
	int position;
	cout << "choose a position between 1 and 9: " << "\n";
	in >> position;

	a.mark_board(position);
	return in;
}

#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"


int main() 
{
	string cont;
	string player;
	int position;
	TicTacToe game;
	TicTacToeManager manager;

	do
	{
		while (!(player == "X" || player == "O"))
		{
			try
			{
				cout << "Choose between X or O to start the game. ";
				cin >> player;
				game.start_game(player);
			}
			catch (Invalid e)
			{
				cout << e.get_error();
			}
		}

		while (game.game_over() == false)
		{
			try
			{
				cin >> game;
				cout << game;
				
				
				
				//cout << "choose a position between 1 and 9: " << "\n";
				//cin >> position;

				//game.mark_board(position);
			}
			catch (Invalid e)
			{
				cout << e.get_error();
			}
		}

			cout << "To continue playing press Y. ";
			cin >> cont;

	} while (cont == "Y");

	cout << manager;
	return 0;
}
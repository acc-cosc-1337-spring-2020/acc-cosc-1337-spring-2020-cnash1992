#include "tic_tac_toe.h"


int main() 
{
	string cont;
	string player;
	int position;
	TicTacToe game;
	
	try 
	{
		cout << "Choose between X or O to start the game. ";
		cin >> player;
		game.start_game(player);

		do 
		{
			cout << "choose a position between 1 and 9: " << "\n";
			cin >> position;

			game.mark_board(position);

			cout << "To continue playing press Y. ";
			cin >> cont;

		} while (cont == "Y");

	}
	
	catch (Invalid e) 
	{
		cout << e.get_error() << "\n";
	}
		
	return 0;
}
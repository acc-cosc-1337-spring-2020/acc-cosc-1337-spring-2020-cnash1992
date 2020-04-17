//h
#ifndef TICTACTOE_MANAGER_H
#define TICTACTOE_MANAGER_H
#include "tic_tac_toe.h"
#include <functional>

class TicTacToeManager : TicTacToe
{
public:
	void save_game(const TicTacToe b);
	void get_winner_total(int& o, int& x, int& t);
	friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);

private:
	vector<std::reference_wrapper<TicTacToe>> games;
	int o_wins{0};
	int x_wins{0};
	int ties{0};
	void update_winner_count(string winner);

};

#endif // !TICTACTOE_MANAGER_H

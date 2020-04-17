//h


#ifndef TICTACTOE_3_H
#define TICTACTOE_3_H
#include "tic_tac_toe.h"


class TicTacToe3 : TicTacToe 
{
public:
	TicTacToe3() : TicTacToe(3) {}
	friend std::ostream& operator<<(std::ostream& out, const TicTacToe3& b);
	friend std::istream& operator>>(std::istream& in, TicTacToe3& b);

private:
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();

};

#endif // TICTACTOE_3_H

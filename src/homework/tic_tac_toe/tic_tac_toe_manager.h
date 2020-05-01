//h
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include<vector>
#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"
#include <memory>

using std::unique_ptr; using std::make_unique;

class TicTacToeManager 
{
public:
	TicTacToeManager() = default;
	//TicTacToeManager(TicTacToeData& data);
	void save_game(unique_ptr<TicTacToe>& game);
	friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& m);
	~TicTacToeManager();
private:
	TicTacToeData data;
	void update_winner_count(std::string winner);
	int o_wins{ 0 }, x_wins{ 0 }, ties{ 0 };
	std::vector<std::unique_ptr<TicTacToe>> games;
	
};

#endif // !TIC_TAC_TOE_MANAGER_H

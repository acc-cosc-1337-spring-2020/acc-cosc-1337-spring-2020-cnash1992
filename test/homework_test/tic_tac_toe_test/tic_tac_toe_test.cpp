#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <functional>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test can�t call mark board before start game")
{
	TicTacToe3 game;
	REQUIRE_THROWS_AS(game.mark_board(1), Error);
}

TEST_CASE("Test start game accepts only X or O")
{
	TicTacToe3 game;
	REQUIRE_THROWS_AS(game.start_game("Y"), Error);
}

TEST_CASE("Test set first player to X")
{

	TicTacToe3 game;
	game.start_game("X");

	REQUIRE(game.get_player() == "X");
}

TEST_CASE("Test set first player to O")
{

	TicTacToe3 game;
	game.start_game("O");

	REQUIRE(game.get_player() == "O");
}

TEST_CASE("Test start game with X game flow")
{

	TicTacToe3 game;
	game.start_game("X");
	REQUIRE(game.get_player() == "X");

	game.mark_board(4);
	REQUIRE(game.get_player() == "O");
}

TEST_CASE("Test win by first column", "[X wins second column]")
{
	TicTacToe3 board1;
	std::reference_wrapper<TicTacToe> board = board1;
	board.get().start_game("X");
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(1);//X         
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(2);//O          
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(4);//X          
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(5);//O          
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(7);//X 
	//X wins 
	REQUIRE(board.get().game_over() == true);
}

TEST_CASE("Test win by second column", "[X wins second column]")
{
	TicTacToe3 board1;
	std::reference_wrapper<TicTacToe> board = board1;
	board.get().start_game("X");
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(2);//X         
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(1);//O          
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(5);//X          
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(4);//O          
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(8);//X 
	//X wins 
	REQUIRE(board.get().game_over() == true);
}

TEST_CASE("Test win by third column", "[X wins third column]")
{
	TicTacToe3 board1;
	std::reference_wrapper<TicTacToe> board = board1;

	board.get().start_game("X");
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(3);//X         
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(1);//O          
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(6);//X          
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(4);//O          
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(9);//X 
	//X wins 
	REQUIRE(board.get().game_over() == true);
}

TEST_CASE("Test win by first row", "[X wins first row]")
{
	TicTacToe3 board1;
	std::reference_wrapper<TicTacToe> board = board1;

	board.get().start_game("X");
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(1);//X         
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(4);//O          
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(2);//X          
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(5);//O          
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(3);//X 
	//X wins 
	REQUIRE(board.get().game_over() == true);
}

TEST_CASE("Test win by second row", "[X wins second row]")
{
	TicTacToe3 board1;
	std::reference_wrapper<TicTacToe> board = board1;

	board.get().start_game("X");
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(4);//X         
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(2);//O          
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(5);//X          
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(1);//O          
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(6);//X 
	//X wins 
	REQUIRE(board.get().game_over() == true);
}

TEST_CASE("Test win by third row", "[X wins third row]")
{
	TicTacToe3 board1;
	std::reference_wrapper<TicTacToe> board = board1;

	board.get().start_game("X");
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(7);//X         
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(4);//O          
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(8);//X          
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(5);//O          
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(9);//X 
	//X wins 
	REQUIRE(board.get().game_over() == true);
}

TEST_CASE("Test win diagonal 1", "[X wins with 1 5 9]")
{
	TicTacToe3 board1;
	std::reference_wrapper<TicTacToe> board = board1;

	board.get().start_game("X");
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(1);//X         
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(4);//O          
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(5);//X          
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(3);//O          
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(9);//X 
	//X wins 
	REQUIRE(board.get().game_over() == true);
}

TEST_CASE("Test win diagonal 2", "[X wins with 3 5 7]")
{
	TicTacToe3 board1;
	std::reference_wrapper<TicTacToe> board = board1;

	board.get().start_game("X");
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(3);//X         
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(4);//O          
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(5);//X          
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(1);//O          
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(7);//X 
	//X wins 
	REQUIRE(board.get().game_over() == true);
	REQUIRE(board.get().get_winner() == "X");
}

TEST_CASE("Test tie")
{
	TicTacToe3 board1;
	std::reference_wrapper<TicTacToe> board = board1;

	board.get().start_game("X");
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(1);//X         
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(2);//O          
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(4);//X          
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(7);//O          
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(5);//X 
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(6);//O 
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(3);//X 
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(9);//O 
	REQUIRE(board.get().game_over() == false);
	board.get().mark_board(8);//X 
	//no winner
	REQUIRE(board.get().game_over() == true);
	REQUIRE(board.get().get_winner() == "C");
}
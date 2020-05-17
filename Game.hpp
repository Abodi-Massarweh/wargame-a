#pragma once
/**
 * Header file for the war game.
 * 
 * @author Erel Segal-Halevi
 * @since  2020-05
 */

#include "Board.hpp"

namespace WarGame {
	class Game {
	 private:
		Board* borad;
	 public:
	 
 		/**
		 *  Game Cons will initilize board and place soldiers.
		 */
		Game(uint numRows, uint numCols);
		
		/**
		 *  Play the game and return the winner (1 or 2).
		 */
		uint play(); 
		
		// operator for reading which soldiers are on the game-board.
		// will help you check your game moves
		// will return "FootSoldier" / "Empty" ....
    	std::string operator[](std::pair<int,int> location) const;

		// Check if the game is over, and if so - who is the winner.
		// returns 0 if the game is not over (i.e., both players have remaining soldiers).
		// returns 1 if the game is over and player 1 won.
		// returns 2 if the game is over and player 2 won.
		uint winner() const ;
		
		//activate the soldier placed in the input location abitlity
		void activate(std::pair<int,int> lovation);
	};
}

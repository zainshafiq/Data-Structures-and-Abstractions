#include <iostream>
#include "tictactoe.h"

using namespace std;

int main()
{
	Board bGame;
	Player* phGame = new PlayerHuman;
	Player* prGame = new PlayerRandom;
	
	char player1, comp1 = 'X';
	char playerChoice;
	cout << "\n\n Welcome to the World's Best Tic-Tac-Toe Game!! \n\n" << endl << endl;
	
	
	while ((playerChoice != 'A' || playerChoice != 'a') || (playerChoice != 'B' || playerChoice != 'b'))
	{
		cout << "\n\n Who is Player 1 (A - Human || B - Computer)? Please Make Your Choice: ";
		cin >> playerChoice;
		cout << "\n\n Who is Player 2 (A - Human || B - Computer)? Please Make Your Choice: ";
		cin >> playerChoice;
	}

	if (playerChoice == 'A' || playerChoice == 'a')
	{
		while (bGame.DetermineDraw() == false)
		{
			bGame.DrawBoard();
			phGame->GetMove(player1);
			prGame->TogglePlayer(player1);
		}
	}

	else if (playerChoice == 'B' || playerChoice == 'b')
	{
		while (bGame.DetermineDraw() == false)
		{
			bGame.DrawBoard();
			phGame->GetMove(comp1);
			prGame->TogglePlayer(comp1);
		}
	}

	bGame.DrawBoard();

	return 0;
}
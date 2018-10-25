#include <iostream>
#include "tictactoe.h"
#include <ctime>

using namespace std;

/////---------------------------------------------Board-------------------------------------------------------------------/////

Board::Board()
{
	int row, column = 0;
	board[3][3] = NULL;
	board[row][column] = '\0';
	srand(time(0));
}

Board::~Board()
{
	if (board[3][3] != NULL)
	{
		delete[] board;
		board[row][column] = NULL;
		row = NULL;
		column = NULL;
	}
}

void Board::DrawBoard()
{
	char print[][3] = { { ' ', ' ', ' ' },
	{ ' ', ' ', ' ' },
	{ ' ', ' ', ' ' } };

	cout << "     1   2   3" << endl;
	cout << "   +---+---+---+" << endl;

	cout << " 1" << " | " << print[0][0] << " | " << print[0][1] << " | " << print[0][2] << " | " << endl;
	cout << "   +---+---+---+" << endl;

	cout << " 2" << " | " << print[1][0] << " | " << print[1][1] << " | " << print[1][2] << " | " << endl;
	cout << "   +---+---+---+" << endl;

	cout << " 3" << " | " << print[2][0] << " | " << print[2][1] << " | " << print[2][2] << " | " << endl;
	cout << "   +---+---+---+" << endl;

}

bool Board::DetermineDraw()
{
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<3; j++)
		{
			if (board[i][j] == 'X' && board[i][j] == 'O')
				return true;
			else
				return false;
		}
	}
}

/////------------------------------------------------------------Player-------------------------------------------------------/////

Player::Player()
{
	//---Blank---
}

Player::~Player()
{
	//---Blank---
}

void Player::TogglePlayer(char player)
{
	if (player == 'X')
		player = 'O';
	else if (player == 'O')
		player = 'X';
}

/////----------------------------------------------------------PlayerHuman---------------------------------------------------/////

PlayerHuman::PlayerHuman()
{
	int row, column = 0;
	board[3][3] = NULL;
	board[row][column] = '\0';
}

PlayerHuman::~PlayerHuman()
{
	if (board[3][3] != NULL)
	{
		delete[] board;
		board[row][column] = NULL;
		row = NULL;
		column = NULL;
	}
}


void Player::GetMove(int move)
{
	char player = 'X';
	char dec;
	cout << "\n\n Are you Ready to Play!? (Y/N) \2\2\2 \n\n" << endl;
	cin >> dec;

	if (dec == 'Y' || dec == 'y')
	{
		cout << "Choose your Row: ";
		cin >> row;
		cout << endl << "Choose your Column: ";
		cin >> column;

		cin >> move;

		if (move == 1)
		{
			board[0][0] = player;
		}
		else if (move == 2)
		{
			board[0][1] = player;
		}
		else if (move == 3)
		{
			board[0][2] = player;
		}
		else if (move == 4)
		{
			board[1][0] = player;
		}
		else if (move == 5)
		{
			board[1][1] = player;
		}
		else if (move == 6)
		{
			board[1][2] = player;
		}
		else if (move == 7)
		{
			board[2][0] = player;
		}
		else if (move == 8)
		{
			board[2][1] = player;
		}
		else if (move == 9)
		{
			board[2][2] = player;
		}
	}

	else if (dec == 'N' || dec == 'n')
	{
		cout << "See you again!, Good Bye!!" << endl << endl;
	}

	else
	{
		cout << "Invalid Input!! GoodBye!!" << endl << endl;
	}
}

/////----------------------------------------------------------PlayerRandom---------------------------------------------------/////

PlayerRandom::PlayerRandom()
{
	int pos = NULL;
	int player = 0;
}

PlayerRandom::~PlayerRandom()
{
	if (pos != NULL)
	{
		player = NULL;
	}
}

void Player::computerMove()
{
	int move;
	move = rand() % 3;	
}
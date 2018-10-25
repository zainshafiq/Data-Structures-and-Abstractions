#ifndef TICTACTOE_H
#define TICTACTOE_H

class Board
{
protected:
	int row;
	int column;
	char board[3][3];
	
public:
	Board();
	~Board();
	void DrawBoard();
	void PrintBoard();
	bool DetermineDraw();
};

class Player
{
protected:
	int row, column, player;
	char board[3][3];
	int pos[9];
public:
	Player();
	~Player();
	void TogglePlayer(char player);
	virtual void GetMove(int move);
	virtual void computerMove();
};

class PlayerHuman: public Player
{
public:
	PlayerHuman();
	~PlayerHuman();	
	virtual void GetMove(int move);
};

class PlayerRandom: public Player
{
public:
	PlayerRandom();
	~PlayerRandom();
	virtual void computerMove();
};


#endif
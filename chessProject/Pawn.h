#pragma once
#include "Piece.h"
#include "Board.h"

class Pawn : public Piece
{
private:
	bool checkFirst(string indexes);
	bool isCapture(string indexes);
	int checkWayForPawn(string indexes);
	void promotion(string indexes);
public:
	Pawn(color color, Board* board);
	virtual codes checkValid(string indexes);

	//fields:
	static bool _whoCall; //true - isCheck, false - other
};

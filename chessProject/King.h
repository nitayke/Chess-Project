#pragma once
#include "Piece.h"
#include "Board.h"

class King : public Piece
{
public:
	King(color color, Board* board);
	virtual codes checkValid(string indexes);
};
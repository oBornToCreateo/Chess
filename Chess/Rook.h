#pragma once
#include "Piece.h"

class Rook : public Piece {
public:
	Rook(int x, int y, const std::string spritename, bool white,Board& brd);
	virtual std::vector<std::pair<Coords, Coords>> GetMoves()override;
	virtual void GetTargets(Map* oppoPieces)override;
private:
};
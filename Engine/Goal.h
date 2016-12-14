#pragma once
#include "Snake.h"
#include "Board.h"

#include <random>

class Goal
{
public:
	Goal(std::mt19937& rng, const Board& brd, const Snake& snake);
	void Respawn(std::mt19937& rng, const Board& brd, const Snake& snake);
	void Draw(Board& brd) const;
	const Location& GetLocation() const;
	Goal( int in_x, int in_y)
		:
		x(in_x),
		y(in_y)
	{}
	/*void Draw(Graphics& gfx) const
	{
		gfx.DrawRectDim(x,y, dimension,dimension, c);
	}*/
		
private:
	static constexpr int dimension = 20;
	static constexpr Color c = Colors::Red;
	Location loc;
	int x;
	int y;
};

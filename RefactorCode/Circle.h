#pragma once
#include "Shape.h"

class Circle : public Shape
{
public:
	Circle(std::vector<coords>& _coords, int _r) :
		coords{ std::move(_coords) }, r{ _r }
	{
	}

	virtual int getSqrt() override;
	virtual int getVolume() override;

private:
	std::vector<coords> coords;
	int r;
};
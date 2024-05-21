#pragma once
#include "Shape.h"

class Cylinder : public Shape
{
public:
	Cylinder(std::vector<coords>& _coords, int _r, int _h) :
		coords{ std::move(_coords) }, r{ _r }, h{ _h } {}

	virtual int getSqrt() override;
	virtual int getVolume() override;

private:
	std::vector<coords> coords;
	int r, h;
};
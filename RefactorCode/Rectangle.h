#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
public:
	Rectangle(std::vector<coords>& _coords) : coords{ std::move(_coords) }
	{
		setA();
		setB();
	}

	virtual void shift(int m, int n) override; // смещения по осям x, y, z;
	virtual void scale(int s) override; // полное масштабирование.
	virtual void scaleX(int a) override; // масштабирование по отдельным осям;
	virtual void scaleY(int b) override; // масштабирование по отдельным осям;
	virtual int getSqrt() override;
	virtual int getVolume() override;
	virtual void setA() override;
	virtual void setB() override;
private:
	std::vector<coords> coords;
	double a, b; // длина, ширина
};

#include "Rectangle.h"

void Rectangle::shift(int m, int n)
{
	for (int i = 0; i < 4; ++i)
	{
		coords[i].x += m;
		coords[i].y += n;
	}
}

void Rectangle::scale(int s) 
{
	for (int i = 0; i < 4; ++i)
	{
		coords[i].x /= s;
		coords[i].y /= s;
	}
	setA();
	setB();
}

void Rectangle::scaleX(int a) 
{
	for (int i = 0; i < 4; ++i)
	{
		coords[i].x *= a;
	}
	setA();
	setB();
}

void Rectangle::scaleY(int b)
{
	for (int i = 0; i < 4; ++i)
	{
		coords[i].y *= b;
	}
	setA();
	setB();
}

void Rectangle::setA()
{
	a = sqrt(abs(coords[0].x - coords[1].x) + abs(coords[0].y - coords[1].y));
}

void Rectangle::setB()
{
	b = sqrt(abs(coords[0].x - coords[3].x) + abs(coords[0].y - coords[3].y));
}

int Rectangle::getSqrt()
{
	return a * b;
}

int Rectangle::getVolume()
{
	return 0;
}
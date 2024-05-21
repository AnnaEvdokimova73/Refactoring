#include "Line.h"

void Line::shift(int m, int n)
{
	for (int i = 0; i < coords.size(); ++i)
	{
		coords[i].x += m;
		coords[i].y += n;
	}
}

void Line::scale(int s)
{
	for (int i = 0; i < coords.size(); ++i)
	{
		coords[i].x /= s;
		coords[i].y /= s;
	}
	setA();
}

void Line::scaleX(int a) 
{
	for (int i = 0; i < coords.size(); ++i)
	{
		coords[i].x *= a;
	}
	setA();
}
void Line::scaleY(int b) 
{
	for (int i = 0; i < coords.size(); ++i)
	{
		coords[i].y *= b;
	}
	setA();
}

void Line::setA()
{
	a = sqrt(abs(coords[0].x - coords[1].x) + abs(coords[0].y - coords[1].y));
}

int Line::getSqrt()
{
	return 0;
}

int Line::getVolume()
{
	return 0;
}
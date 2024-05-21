#include "Parallelepiped.h"

void Parallelepiped::shift(int m, int n, int k)
{
	for (int i = 0; i < 8; ++i)
	{
		coords[i].x += m;
		coords[i].y += n;
		coords[i].z += k;
	}
}

void Parallelepiped::scale(int s)
{
	for (int i = 0; i < 8; ++i)
	{
		coords[i].x /= s;
		coords[i].y /= s;
		coords[i].z /= s;
	}
	setA();
	setB();
	setC();
}

void Parallelepiped::scaleX(int a)
{
	for (int i = 0; i < 8; ++i)
	{
		coords[i].x *= a;
	}
	setA();
	setB();
	setC();
}

void Parallelepiped::scaleY(int b)
{
	for (int i = 0; i < 8; ++i)
	{
		coords[i].y *= b;
	}
	setA();
	setB();
}

void Parallelepiped::scaleZ(int c)
{
	for (int i = 0; i < 8; ++i)
	{
		coords[i].z *= c;
	}
	setC();
}

void Parallelepiped::setA()
{
	a = sqrt(abs(coords[0].x - coords[1].x) + abs(coords[0].y - coords[1].y));
}

void Parallelepiped::setB()
{
	b = sqrt(abs(coords[0].x - coords[3].x) + abs(coords[0].y - coords[3].y));
}

void Parallelepiped::setC()
{
	c = sqrt(abs(coords[0].x - coords[4].x) + abs(coords[0].z - coords[4].z));
}


int Parallelepiped::getSqrt()
{
	return 2 * a * b + 2 * a * c + 2 * b * c;
}

int Parallelepiped::getVolume()
{
	return a * b * c;
}
#pragma once
#include<cmath>
#include <vector>

#define M_PI 3.14

//typedef std::pair<int, int> point;

struct coords {
	int x;
	int y;
	int z = 0;
};

// abstruct class
class Shape
{
public:
	Shape() {};
	virtual void shift(int m, int n) {}
	virtual void shift(int m, int n, int k) {} // смещения по осям x, y, z;
	virtual void scale(int s) {} // полное масштабирование.
	virtual void scaleX(int a) {} // масштабирование по отдельным осям;
	virtual void scaleY(int b) {} // масштабирование по отдельным осям;
	virtual void scaleZ(int c) {} // масштабирование по отдельным осям;

	virtual void setA() {}
	virtual void setB() {}
	virtual void setC() {}

	virtual int getSqrt() {}
	virtual int getVolume() {}

//public:
	//std::vector<coords> coords;
};
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
	virtual void shift(int m, int n, int k) {} // �������� �� ���� x, y, z;
	virtual void scale(int s) {} // ������ ���������������.
	virtual void scaleX(int a) {} // ��������������� �� ��������� ����;
	virtual void scaleY(int b) {} // ��������������� �� ��������� ����;
	virtual void scaleZ(int c) {} // ��������������� �� ��������� ����;

	virtual void setA() {}
	virtual void setB() {}
	virtual void setC() {}

	virtual int getSqrt() {}
	virtual int getVolume() {}

//public:
	//std::vector<coords> coords;
};
#pragma once
#include "Shape.h"

class Line : public Shape
{
public:
	Line(std::vector<coords>& _coords) : coords{ std::move(_coords) }
	{
		setA();
	}

	virtual void shift(int m, int n) override; // �������� �� ���� x, y, z;
	virtual void scale(int s) override; // ������ ���������������.
	virtual void scaleX(int a) override; // ��������������� �� ��������� ����;
	virtual void scaleY(int b) override; // ��������������� �� ��������� ����;
	virtual int getSqrt() override;
	virtual int getVolume() override;
	virtual void setA() override;

private:
	std::vector<coords> coords;
	double a; // �����
};
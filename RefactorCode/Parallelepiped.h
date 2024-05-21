#pragma once
#include "Shape.h"


class Parallelepiped : public Shape
{
public:
	Parallelepiped(std::vector<coords>& _coords) : coords{ std::move(_coords) }
	{
		setA();
		setB();
		setC();
	}
	virtual void shift(int m, int n, int k) override; // �������� �� ���� x, y, z;
	virtual void scale(int s) override; // ������ ���������������.
	virtual void scaleX(int a) override; // ��������������� �� ��������� ����;
	virtual void scaleY(int b) override; // ��������������� �� ��������� ����;
	virtual void scaleZ(int c) override; // ��������������� �� ��������� ����;
	virtual int getSqrt() override;
	virtual int getVolume() override;
	virtual void setA() override;
	virtual void setB() override;
	virtual void setC() override;

private:
	std::vector<coords> coords;
	double a, b, c; // �����, ������, ������
};
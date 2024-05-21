#include "transform.h"

transform::transform(const Shape& sh)
{
	shape = sh;
}

Shape transform::shift(int m, int n, int k)
{
}

Shape transform::scaleX(int a)
{
	switch (shape.getType())
	{
	case Shape::cube:
		shape.x1 *= a;
		shape.x2 *= a;
		shape.x3 *= a;
		shape.x4 *= a;
		shape.x5 *= a;
		shape.x6 *= a;
		shape.x7 *= a;
		shape.x8 *= a;
		break;
	}
	return shape;
}

Shape transform::scaleY(int d)
{
	switch (shape.getType())
	{
	case Shape::cube:
		shape.y1 *= d;
		shape.y2 *= d;
		shape.y3 *= d;
		shape.y4 *= d;
		shape.y5 *= d;
		shape.y6 *= d;
		shape.y7 *= d;
		shape.y8 *= d;
		break;
	}
	return shape;
}

Shape transform::scaleZ(int e)
{
	switch (shape.getType())
	{
	case Shape::cube:
		shape.z1 *= e;
		shape.y2 *= e;
		shape.z3 *= e;
		shape.z4 *= e;
		shape.z5 *= e;
		shape.z6 *= e;
		shape.z7 *= e;
		shape.z8 *= e;
		break;
	}
	return shape;
}

Shape transform::scale(int s)
{
	return shape;
}
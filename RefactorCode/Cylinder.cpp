#include "Cylinder.h"

int Cylinder::getSqrt()
{
	return M_PI * r * r + 2 * r * h;
}

int Cylinder::getVolume()
{
	return M_PI * r * r * h;
}
#include "stdafx.h"



Scaling::Scaling(GLdouble x, GLdouble y) : Transformation()
{
	this->x = x;
	this->y = y;
}

void Scaling::transform(ConvexPolygon * polygon) const
{
	polygon->scale(this->x, this->y);
}


#include "stdafx.h"



Translation::Translation(GLdouble x, GLdouble y, GLint startStep, GLint endStep) : Transformation()
{
	this->x = x;
	this->y = y;
}

void Translation::transform(ConvexPolygon * polygon) const
{
	polygon->translate(this->x, this->y);
}




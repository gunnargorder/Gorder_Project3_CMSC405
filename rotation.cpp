
#include "stdafx.h"


Rotation::Rotation(GLdouble angle) : Transformation()
{
	this->angle = angle;
}
void Rotation::transform(ConvexPolygon * polygon) const
{
	polygon->rotate(this->angle);
	
}


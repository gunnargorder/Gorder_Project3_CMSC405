
#include "stdafx.h"


Rotation::Rotation(GLdouble angle, GLint startStep, GLint endStep) : Transformation()
{
	this->angle = angle;
}
void Rotation::transform(ConvexPolygon * polygon) const
{
	polygon->rotate(this->angle);
	
}


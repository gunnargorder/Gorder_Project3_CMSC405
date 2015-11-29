// CMSC 405 Computer Graphics
// Project 2
// Duane J. Jarc
// August 1, 2013

// Function bodies of class that defines an isosceles triangle 

#include "stdafx.h"

// Constructor that is supplied the transformations, color, and angle of top vertex

IsoscelesTriangle::IsoscelesTriangle(vector<Transformation*> transformations, Color color, GLdouble angle):
	ConvexPolygon(transformations, color, 3)
{
	GLdouble x = tan(angle * M_PI / (PI_DEGREES * 2));
	vertices[0] = { 0.0, 1.0 };
	vertices[1] = { -x, 0.0 };
	vertices[2] = { x, 0.0 };
}

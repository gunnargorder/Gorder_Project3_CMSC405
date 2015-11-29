// CMSC 405 Computer Graphics
// Project 2
// Duane J. Jarc
// August 1, 2013

// Function bodies of class that defines regular polygons

#include "stdafx.h"

// Constructor for regular polygon that is supplied the transformations, color, and number of vertices

RegularPolygon::RegularPolygon(vector<Transformation*> transformations, Color color, GLint vertexCount): 
	ConvexPolygon(transformations, color, vertexCount)
{
	for (GLint vertex = 0; vertex < vertexCount; vertex++) 
	{
		GLdouble angle = (M_PI * 2 / vertexCount) * vertex;
		vertices[vertex] = { cos(angle), sin(angle) };
	}
}



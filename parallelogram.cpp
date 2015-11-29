// CMSC 405 Computer Graphics
// Project 2
// Duane J. Jarc
// August 1, 2013

// Function bodies of class that defines a parallelogram 

#include "stdafx.h"

// Constructor for parallelogram that is supplied the transformations, color and angle of lower left corner

Parallelogram::Parallelogram(vector<Transformation*> transformations, Color color, GLdouble angle): 
	ConvexPolygon(transformations, color, 4)
{
	GLdouble x = cos(angle * M_PI / PI_DEGREES), y = sin(angle * M_PI / PI_DEGREES);
	vertices[0] = { 0.0, 0.0 };
	vertices[1] = { 1.0, 0.0 };
	vertices[2] = { x + 1.0, y };
	vertices[3] = { x, y };
}

// Performs a translation using OpenGL matrix multiplication

void Parallelogram::translate(GLdouble translateX, GLdouble translateY)
{
	GLdouble translator[] = {
		1.0, 0.0, 0.0, 0.0,
		0.0, 1.0, 0.0, 0.0,
		0.0, 0.0, 1.0, 0.0,
		translateX, translateY, 0.0, 1.0};
 
	glMultMatrixd(translator);    
}

// Performs a rotation using OpenGL matrix multiplication

void Parallelogram::rotate(GLdouble angle)
{
	double radians =  degreesToRadians(angle);
	GLdouble rotater[] = {
		cos(radians), sin(radians), 0.0, 0.0,
		-sin(radians), cos(radians), 0.0, 0.0,
		0.0, 0.0, 1.0, 0.0,
		0.0, 0.0, 0.0, 1.0};
 
	glMultMatrixd(rotater);    
}

// Performs scaling using OpenGL matrix multiplication

void Parallelogram::scale(GLdouble scaleX, GLdouble scaleY) 
{
	GLdouble scaler[] = {
		scaleX, 0.0, 0.0, 0.0,
		0.0, scaleY, 0.0, 0.0,
		0.0, 0.0, 1.0, 0.0,
		0.0, 0.0, 0.0, 1.0};
 
	glMultMatrixd(scaler);    
}

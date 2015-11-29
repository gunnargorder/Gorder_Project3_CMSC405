// CMSC 405 Computer Graphics
// Project 2
// Duane J. Jarc
// August 1, 2013

// Function bodies of base class for all polygon classes

#include "stdafx.h"

// Constructor that is supplied the transformations, color and number of vertices

ConvexPolygon::ConvexPolygon(vector<Transformation*> transformations, Color color, GLint vertexCount) : Graphic(color)
{
	this->transformations = transformations;
	this->vertexCount = vertexCount;
	vertices = new Point[vertexCount];
}

// Draws all convex polygons

void ConvexPolygon::draw()
{
	glPushMatrix();
	for each (Transformation* transformation in transformations)
		transformation->transform(this);
	colorDrawing();
	glBegin(GL_POLYGON);
	for (GLint vertex = 0; vertex < vertexCount; vertex++)
		glVertex2d(vertices[vertex].x, vertices[vertex].y);
	glEnd(); 
	glPopMatrix();
}


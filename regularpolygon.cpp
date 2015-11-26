// CMSC 405 Computer Graphics
// Project 1
// Gunnar Gorder
// November 1, 2015
// Class Description: RegularPolygon class creates
// a polygon of an indicated number of sides and displays
// it to the scene

#include "stdafx.h"

// The RegularPolygon constructor which creates the object 
// and stores it for the draw command to be displayed in the scene vector<Transformation*> transformations, Color color
RegularPolygon::RegularPolygon(vector<Transformation*> transformations, Color color, GLint vertices) : ConvexPolygon(transformations, color)
{
	Point startingPoint = { 0, 1 };
	this->numV = vertices;
	this->radius = 10;
	this->transformations = transformations;
	GLdouble angle = 2 * M_PI  / (GLdouble)numV;
	GLint k;

	for (k = 0; k < this->numV; k++) {
		Point newP;
		// M_PI is C++ Constant for PI
		newP.x = this->startingPoint.x + (this->radius * sin(k*angle));
		newP.y = this->startingPoint.y + (this->radius * cos(k*angle));
		//add to points list

		this->pointsList.push_back(newP);
	}


}

//// The draw method calls the parent class draw method directly
//void RegularPolygon::draw()
//{
//	ConvexPolygon::draw();
//}

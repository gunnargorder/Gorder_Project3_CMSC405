// CMSC 405 Computer Graphics
// Project 1
// Gunnar Gorder
// November 1, 2015
// Class Description: Creates an Isosceles Traingle
// to be added to the scene,used the ConvexPolygon class's
// draw() method directly

#include "stdafx.h"




// The IsoscelesTriangle constructor which creates the object 
// and stores it for the draw command to be displayed in the scene
//IsoscelesTriangle::IsoscelesTriangle(Color color, Point point, GLint height, GLint width):ConvexPolygon(color)
//{
//	this->numV = 3;
//	this->height = height;
//	this->width = width;
//	//this->startingPoint = point;
//
//	Point point2;
//	point2.x = this->startingPoint.x + (this->width/2);
//	point2.y = this->startingPoint.y - this->height;
//
//	Point point3;
//	point3.x = this->startingPoint.x - (this->width / 2);
//	point3.y = this->startingPoint.y - this->height;
//
//	this->pointsList.push_back(point3);
//	this->pointsList.push_back(point2);
//	this->pointsList.push_back(this->startingPoint);
//
//}
IsoscelesTriangle::IsoscelesTriangle(vector<Transformation*> transformations, Color color, GLdouble angle):ConvexPolygon(transformations, color)
{
		this->numV = 3;
		this->height = 1;
		this->width = (tan(angle));
		this->startingPoint = { 0, 1 };
		this->transformations = transformations;
	
		Point point2;	
		point2.x = this->startingPoint.x + (this->width);
		point2.y = this->startingPoint.y - this->height;
	
		Point point3;
		point3.x = this->startingPoint.x - (this->width);
		point3.y = this->startingPoint.y - this->height;
	
		this->pointsList.push_back(point3);
		this->pointsList.push_back(point2);
		this->pointsList.push_back(this->startingPoint);
}

// The draw method calls the parent class draw method directly
void IsoscelesTriangle::draw()
{
	ConvexPolygon::draw();
}

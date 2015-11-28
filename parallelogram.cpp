// CMSC 405 Computer Graphics
// Project 1
// Gunnar Gorder
// November 1, 2015
// Class Description: The Parallelogram class creases and stores a
// Parallelogram and displays it to the scene

#include "stdafx.h"

// The Parallelogram constructor which creates the object 
// and stores it for the draw command to be displayed in the scene
Parallelogram::Parallelogram(vector<Transformation*> transformations, Color color, GLdouble angle) :ConvexPolygon(transformations, color)
{
	this->numV = 4;
	this->angle = angle;
	this->transformations = transformations;
	GLdouble sideLength = 10;

	this->startingPoint = { 0, 0 };

	Point point4;
	point4.x = sideLength;
	point4.y = 0;

	Point point3;
	point3.x = cos(this->angle * (M_PI / 180))*sideLength + sideLength;
	point3.y = sin(this->angle * (M_PI / 180))*sideLength;

	Point point2;
	point2.x = cos(this->angle * (M_PI/180))*sideLength;
	point2.y = sin(this->angle * (M_PI / 180))*sideLength;

	this->pointsList.push_back(this->startingPoint);
	this->pointsList.push_back(point2);
	this->pointsList.push_back(point3);
	this->pointsList.push_back(point4);

}

//// The draw method calls the parent class draw method directly
//void Parallelogram::draw()
//{
//	ConvexPolygon::draw();
//}

void Parallelogram::translate(GLdouble translateX, GLdouble translateY)
{
	GLdouble translator[] = {
		1.0,        0.0,        0.0, 0.0,
		0.0,        1.0,        0.0, 0.0,
		0.0,        0.0,        1.0, 0.0,
		translateX, translateY, 0.0, 1.0 };

	glMultMatrixd(translator);
}
void Parallelogram::rotate(GLdouble angle)
{
	GLdouble rotate[] = {
		cos(angle) , sin(angle), 0.0, 0.0,
		-sin(angle), cos(angle), 0.0, 0.0,
		0.0        , 0.0       , 1.0, 0.0,
		0.0        , 0.0       , 0.0, 1.0 };

	glMultMatrixd(rotate);
}
void Parallelogram::scale(GLdouble scaleX, GLdouble scaleY)
{
	GLdouble scale[] = {
		scaleX, 0.0,    0.0, 0.0,
		0.0,    scaleY, 0.0, 0.0,
		0.0,    0.0,    1.0, 0.0,
		0.0,    0.0,    0.0, 1.0 };

	glMultMatrixd(scale);
}
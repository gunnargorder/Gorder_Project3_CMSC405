// CMSC 405 Computer Graphics
// Project 1
// Gunnar Gorder
// November 1, 2015
// Class Description: A parent class for all polygon objects
// used in the application

#include "stdafx.h"

Point startingPoint;
std::vector<Point> points;

// The constructor for the parent class
//ConvexPolygon::ConvexPolygon(Color color, Point startingPoint):Graphic(color)
//{
//
//	this->startingPoint = startingPoint;
//
//}

ConvexPolygon::ConvexPolygon(vector<Transformation*> transformations, Color color) :Graphic(color)
{
	this->startingPoint = { 0, 0 };
}

// The draw method for the ConvexPolygon class is inherited by all child classes and
// used/called directly and without modification to display the objects in the scene
void ConvexPolygon::draw()
{
	// Set  graphic objects color to Red or change for your choice
	
	// Modify the x,y positions below to experiment
	//GLint posx = startingPoint.x;
	//GLint posy = startingPoint.y;
	// Your graphics code here  

	

	GLuint regHex;
	GLdouble theta;
	//GLint x, y, k;
	// Sets up a polygon
	regHex = glGenLists(1);
	//  Get an identifier for the display list.
	glNewList(regHex, GL_COMPILE);
	glPushMatrix();
	for (vector<Transformation*>::iterator iterator = transformations.begin(); iterator != transformations.end(); iterator++)
	{
		(*iterator)->transform(this);
	}
	colorDrawing();
	glBegin(GL_POLYGON);
	for (std::vector<int>::size_type i = 0; i != pointsList.size(); i++) {
		//cycle through points list to draw vertexes
		glVertex2i(pointsList[i].x, pointsList[i].y);
	}
	glEnd();
	glPopMatrix();
	glEndList();
	// Must call this to display the Hex graphic
	glCallList(regHex);


}

void ConvexPolygon::translate(GLdouble translateX, GLdouble translateY)
{
	glTranslated(translateX, translateY, 0);

}
void ConvexPolygon::rotate(GLdouble angle)
{
	glRotated(angle, 0, 0, 1);
}
void ConvexPolygon::scale(GLdouble scaleX, GLdouble scaleY)
{
	glScaled(scaleX, scaleY, 1);
}


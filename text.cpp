// CMSC 405 Computer Graphics
// Project 1
// Gunnar Gorder
// November 1, 2015
// Class Description: This class creates a
// text display in the scene with the string
// passed as a parameter

#include "stdafx.h"

Point point;
string strDisplay;

//Constructor for the class
Text::Text(Color color, Point point, string strDisplay):Graphic(color)
{
	
	this->point = point;
	this->strDisplay = strDisplay;
}

// The draw method draws the elements to the scene display
void Text::draw()
{
	//Sets the color of the text
	colorDrawing();
	//Sets the raster position for the 2D with integer values
	glRasterPos2i(point.x, point.y);
	//Loops through the string to place each character of the string
	for (std::string::size_type i = 0; i < strDisplay.size(); ++i) 
	{
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, strDisplay[i]);
	}
	/*string step = to_string(Animator::getCurrent());
	for each (char ch in step)
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, ch);*/
}





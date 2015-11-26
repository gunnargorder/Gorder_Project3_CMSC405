// CMSC 405 Computer Graphics
// Project 2
// Duane J. Jarc
// August 1, 2013

// Project 2 main source file

#include "stdafx.h"

// Global variable that defines the scene object

static Scene scene;

// Function that is called each time the window is drawn

void draw(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	scene.draw();
	glFlush( );
}

// Function that is called each time the window is resized

void resizeWindow(GLint newWidth, GLint newHeight)
{
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluOrtho2D((GLdouble) -newWidth / 2, (GLdouble) newWidth/2, (GLdouble) -newHeight/2, (GLdouble) newHeight/2);
	glClear(GL_COLOR_BUFFER_BIT);  
}

//listens and responds to input from the keyboard
void keyboard(unsigned char key, int x, int y)
{
	switch (key) {
	case 'r':
	case 'R':
		break;
	case 27:  /*  Escape Key  */
		exit(0);
		break;
	default:
		break;
	}
}
//left mouse starts the animation
// Right mouse stops the animation
void mouseFcn(GLint button, GLint action, GLint x, GLint y)
{

	switch (button) {
	case GLUT_LEFT_BUTTON:         //  Start the animation. 
		if (action == GLUT_DOWN)
			//glutIdleFunc(rotateHex);  //change for the animation function
		break;
	case GLUT_RIGHT_BUTTON:          //  Stop the animation. 
		if (action == GLUT_DOWN)
			glutIdleFunc(NULL);
		break; 
	default:
		break;

	}
}



// The main function of the whole program, which requires the name of the scene definition file as a command line argument
// It calls the parser to parse the scene definition file and add he graphic objects to the scene,
// and then it creates the drawing window and registers the callback function for draing the window and resizing it

void main (GLint argc, char** argv)
{
	//Parser parser(argv[1]);
	Parser parser("input.txt");
	try
	{
		scene = parser.parseScene();
	}
	catch (SyntaxError error)
	{
		cout << error.what() << endl;
	}
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	scene.createWindow();
	glutMouseFunc(mouseFcn);
	glutKeyboardFunc(keyboard);
	glutDisplayFunc(draw);
	glutReshapeFunc(resizeWindow);
	glutMainLoop();
}

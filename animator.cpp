
#include "stdafx.h"
#define SLEEPMS 100
GLint Animator::currentStep = 0;
GLboolean Animator::animRunning = false;


void Animator::animate()
{
	Sleep(SLEEPMS);

	//Call step() from animator
	Animator::step();

	glutPostRedisplay();
}

void Animator::step()
{
	currentStep++;
}

GLint Animator::getCurrent()
{
	return currentStep;
}

GLboolean Animator::isAnimeRunning()
{
	return animRunning;
}

void Animator::start()
{
	animRunning = true;
	glutIdleFunc(animate);
}

void Animator::pause()
{
	animRunning = false;
	glutIdleFunc(NULL);
}

void Animator::reset()
{
	animRunning = false;
	currentStep = 0;
	glutIdleFunc(NULL);
	glutPostRedisplay();
}



#include "stdafx.h"
#define SLEEPMS 100
GLint Animator::currentStep = 0;

Animator::Animator()
{
}

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

void Animator::start()
{
	glutIdleFunc(animate);
}

void Animator::pause()
{
	glutIdleFunc(NULL);
}

void Animator::reset()
{
	currentStep = 0;
	glutIdleFunc(NULL);
	glutPostRedisplay();
}


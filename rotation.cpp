
#include "stdafx.h"


Rotation::Rotation(GLdouble angle, GLint startStep, GLint endStep) : Transformation()
{
	this->angle = angle;
	this->startStep = startStep;
	this->endStep = endStep;
}
void Rotation::transform(ConvexPolygon * polygon) const
{
	GLint currentStep = Animator::getCurrent();
	GLdouble rotAngle = 0;
	//if currentStep is < starting step no rotation

	//if current step is greater than starting step and less than ending step calculate rotatationAngle
	if ((currentStep >= this->startStep) && (currentStep <= this->endStep)) {
		rotAngle = this->angle * (currentStep - this->startStep + 1);
	}
	else if(currentStep > this->endStep) {
		//if currentStep is > than ending step, apply final rotation
		rotAngle = this->angle * (this->endStep - this->startStep + 1);
	}


	polygon->rotate(rotAngle);
	
}


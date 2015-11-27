#include "stdafx.h"



Translation::Translation(GLdouble x, GLdouble y, GLint startStep, GLint endStep) : Transformation()
{
	this->x = x;
	this->y = y;
	this->startStep = startStep;
	this->endStep = endStep;
}

void Translation::transform(ConvexPolygon * polygon) const
{
	GLint currentStep = Animator::getCurrent();
	GLdouble x2 = 0;
	GLdouble y2 = 0;


	//if currentStep is < starting step no transformation
		
	if ((currentStep >= this->startStep) && (currentStep <= this->endStep)) {
		//if current step is greater than starting step and less than ending step calculate transformation
		//rotAngle = this->angle * (currentStep - this->startStep + 1);
		x2 = this->x * (currentStep - this->startStep + 1);
		y2 = this->y * (currentStep - this->startStep + 1);
	}
	else if (currentStep > this->endStep) {
		//if currentStep is > than ending step, apply final transformation
		//rotAngle = this->angle * (this->endStep - this->startStep + 1);
		x2 = this->x * (this->endStep - this->startStep + 1);
		y2 = this->y * (this->endStep - this->startStep + 1);

	}
	polygon->translate(x2, y2);
}




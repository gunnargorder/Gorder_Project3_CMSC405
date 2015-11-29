#include "stdafx.h"



Scaling::Scaling(GLdouble x, GLdouble y, GLint startStep, GLint endStep) : Transformation()
{
	this->x = x;
	this->y = y;
	this->startStep = startStep;
	this->endStep = endStep;
}

void Scaling::transform(ConvexPolygon * polygon) const
{
	GLint currentStep = Animator::getCurrent();
	GLdouble x2 = 0;
	GLdouble y2 = 0;

	if((this->startStep!=0) && (this->endStep!=0)){
		//if currentStep is < starting step no transformation
		if (currentStep < this->startStep) {
			return;
		} 
		else 	if ((currentStep >= this->startStep) && (currentStep <= this->endStep)) {
			//if current step is greater than starting step and less than ending step calculate transformation

			x2 = pow(this->x, (currentStep - this->startStep + 1));
			y2 = pow(this->y, (currentStep - this->startStep + 1));
		}
		else if (currentStep > this->endStep) {
			//if currentStep is > than ending step, apply final transformation

			x2 = pow(this->x, (this->endStep - this->startStep + 1));
			y2 = pow(this->y, (this->endStep - this->startStep + 1));

		}
	}
	else {
		x2 = this->x;
		y2 = this->y;
	}
	polygon->scale(x2, y2);
}


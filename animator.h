
class Animator
{
public:
	Animator();
	static void step() {/*Increment current step*/ }
	static GLint getCurrent() {/*returns current step*/ }
private:
	static GLint currentStep;

};


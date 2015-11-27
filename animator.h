
class Animator
{
public:
	static void animate();
	static void step();
	static GLint getCurrent();
	//is an animation running
	static GLboolean isAnimeRunning();
	//start animation
	static void start();
	//pause animation
	static void pause();
	//reset animation
	static void reset();
private:
	static GLint currentStep;
	static GLboolean animRunning;
};


// CMSC 405 Computer Graphics
// Project 2
// Duane J. Jarc
// August 1, 2013

// Class definition for parallelogram class

class Parallelogram: public ConvexPolygon
{
public:
	Parallelogram(vector<Transformation*> transformations, Color color, GLdouble angle);
	void translate(GLdouble translateX, GLdouble translateY) override;
	void rotate(GLdouble angle) override;
	void scale(GLdouble scaleX, GLdouble scaleY) override;
};

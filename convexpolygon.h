// CMSC 405 Computer Graphics
// Project 2
// Duane J. Jarc
// August 1, 2013

// Base class for all polygon classes

class ConvexPolygon: public Graphic, public Transformable
{
public:
	void draw() override;
	void translate(GLdouble translateX, GLdouble translateY) override
		{glTranslated(translateX, translateY, 0);}
	void rotate(GLdouble angle)	override { glRotated(angle, 0.0, 0.0, 1.0); }
	void scale(GLdouble scaleX, GLdouble scaleY) override { glScaled(scaleX, scaleY, 1.0); }
protected:
	ConvexPolygon(vector<Transformation*> transformations, Color color, GLint vertexCount);
	~ConvexPolygon() {delete vertices;}
	GLint vertexCount;
	Point *vertices;
	vector<Transformation*> transformations;
};

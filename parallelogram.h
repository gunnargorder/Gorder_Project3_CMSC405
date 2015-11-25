
class Parallelogram : public ConvexPolygon
{
public:
	Parallelogram(vector<Transformation*> transformations, Color color, GLdouble angle);
	virtual void draw() override;
	virtual void translate(GLdouble translateX, GLdouble translateY) override;
	virtual void rotate(GLdouble angle) override;
	virtual void scale(GLdouble scaleX, GLdouble scaleY) override;
protected:
	GLdouble angle;
};


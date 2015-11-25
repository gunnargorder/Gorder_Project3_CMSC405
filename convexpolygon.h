
class ConvexPolygon: public Graphic, public Transformable
{
protected:
	//ConvexPolygon(Color color, Point startingPoint);
	ConvexPolygon(vector<Transformation*> transformations, Color color);
	virtual void draw() override;
	Point startingPoint;
	GLint numV;
	std::vector<Point> pointsList;
	GLint height;
	GLint width;
	std::vector<Transformation*> transformations;
public:
	virtual void translate(GLdouble translateX, GLdouble translateY);
	virtual void rotate(GLdouble angle);
	virtual void scale(GLdouble scaleX, GLdouble scaleY);
};


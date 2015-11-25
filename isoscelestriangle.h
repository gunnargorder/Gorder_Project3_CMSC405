
class IsoscelesTriangle: public ConvexPolygon
{
public:
	//IsoscelesTriangle(Color color, Point point, GLint height, GLint width);
	IsoscelesTriangle(vector<Transformation*> transformations, Color color, GLdouble angle);
	virtual void draw() override;
};


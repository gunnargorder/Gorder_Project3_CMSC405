
class Translation : public Transformation
{
public:
	Translation(GLdouble x, GLdouble y);
	virtual void transform(ConvexPolygon* polygon) const override;
protected:
	GLdouble x;
	GLdouble y;
};


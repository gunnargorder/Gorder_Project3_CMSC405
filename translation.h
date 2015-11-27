
class Translation : public Transformation
{
public:
	GLdouble x;
	GLdouble y;
	Translation(GLdouble x, GLdouble y, GLint startStep, GLint endStep);
	virtual void transform(ConvexPolygon* polygon) const override;
protected:
	GLint startStep;
	GLint endStep;
};


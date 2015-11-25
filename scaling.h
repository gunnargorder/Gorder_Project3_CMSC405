
class Scaling : public Transformation
{
public:
	Scaling(GLdouble x, GLdouble y);
	virtual void transform(ConvexPolygon* polygon) const override;
protected:
	GLdouble x;
	GLdouble y;
};


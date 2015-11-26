
class Rotation : public Transformation
{
public:
	GLdouble angle;
	Rotation(GLdouble angle, GLint startStep, GLint endStep);
	virtual void transform(ConvexPolygon* polygon) const override;

protected:
	GLint startStep;
	GLint endStep;
};


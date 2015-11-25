
class Rotation : public Transformation
{
public:
	GLdouble angle;
	Rotation(GLdouble angle);
	virtual void transform(ConvexPolygon* polygon) const override;
};


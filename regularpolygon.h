
class RegularPolygon : public ConvexPolygon
{
public:
	RegularPolygon(vector<Transformation*> transformations, Color color, GLint vertices);
	virtual void draw() override;
protected:
	GLint radius;
};


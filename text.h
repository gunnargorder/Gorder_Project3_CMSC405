
class Text: public Graphic
{
public:
	Text(Color color, Point point, string strDisplay);
	virtual void draw() override;
protected:
	Point point;
	string strDisplay;
};



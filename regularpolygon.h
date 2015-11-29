// CMSC 405 Computer Graphics
// Project 2
// Duane J. Jarc
// August 1, 2013

// Class definition for regular polygon class

class RegularPolygon: public ConvexPolygon
{
public:
	RegularPolygon(vector<Transformation*> transformations, Color color, GLint vertexCount);
};
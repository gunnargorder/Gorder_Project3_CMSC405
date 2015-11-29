// CMSC 405 Computer Graphics
// Project 2
// Duane J. Jarc
// August 1, 2013

// Class definition for isosoceles triangles

class IsoscelesTriangle: public ConvexPolygon
{
public:
	IsoscelesTriangle(vector<Transformation*> transformations, Color color, GLdouble angle);
};
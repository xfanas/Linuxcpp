#include "circle.h"

const double pi = 3.141592653589793;

Circle::circle()
{
	r = 0.0, x = 0.0, y = 0.0;
}

Circle::circle( double r, double x, double y ) : r( r ), x( x ), y( y )
{
}

inline void Circle::GetOrigin( double * x, double * y )
{
	*x = this -> x;
	*y = this -> y;
}

inline void Circle::SetOrigin( double x, double y )
{
	this -> x = x;
	this -> y = y;
}

double Circle::GetRadius()
{
	return r;
}

void Circle::SetRadius( double r )
{
	this -> r = r;
}

double Circle::GetPerimeter()
{
	return 2 * pi * r;
}

double Circle::GetArea()
{
	return pi * r * r;
}
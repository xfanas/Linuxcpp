class Circle
{
public:
	Circle();
	// Circle( double r, double x = 0.0, double y = 0.0 );
	// default parameter , not suggested;
	Circle( double r, double x, double y );
	void GetOrigin( double * x, double * y );
	void SetOrigin( double x, double y );
	double GetRadius();
	void SetRadius( double r );
	double GetPerimeter();
	double GetArea();
	~Circle();
private:
	double r, x, y;
};
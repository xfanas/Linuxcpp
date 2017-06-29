#include <iostream>

using namespace std;

int & Inc( int & dest, const int & alpha );

int main(int argc, char const *argv[])
{
	int a = 10, b = 20, c;
	Inc( a, b );
	c = Inc( a, b )++;
	cout << "a: " << a << ", b: " << b << ", c: " << c << endl; 
	return 0;
}

int & Inc( int & dest, const int & alpha )
{
	dest += alpha;
	return dest;
}
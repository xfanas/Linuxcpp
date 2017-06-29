#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

char * DuplicateString( char * s );

int main()
{
	char * name = "fanchuanqi";
	char * copyname;
	copyname = DuplicateString( name );
	cout << copyname << endl;

}



char * DuplicateString( char * s )
{
	char * t;
	unsigned int n, i;
	if( !s ){
		cout << "DuplicateString: Parameter Illegal."; exit(1); 
	}
	n = strlen( s );
	t = ( char * )malloc( n + 1 );
	for( i = 0; i < n; i ++ )
		t[i] = s[i];
		t[n] = '\0';
		return t;
}

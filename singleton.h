class Singleton
{
public:
	static Singleton * Get()
	{
		if( !_s )
			_s = new Singleton;
		return _s;
	}

	int GetData()
	{
		return ++a;
	}

private:
	Singleton()
	{
		a = 0;
	}

	Singleton( const Singleton & that );
	Singleton & operator = ( const Singleton & that );
	~Singleton();

private:
	static Singleton * _s;
	int a;
};
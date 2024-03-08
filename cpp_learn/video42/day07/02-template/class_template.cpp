#include <iostream>

template< typename T > //T deviens ce qu'on veut

//definition d'un template de class
class List {
	public:
	List<T>( T const & content )
	{
	// Etc...
	}
	List<T>( List<T> const & list )
	{
	// Etc...
	}
	~List<T>( void ) {
	// Etc..
	}
	// Etc...

	private:
	T * _content;
	List<T> *_next;
};

int main (void)
{
	List<int> a(42);
	List<float> b(3.14f);
	List<List<int>> c(a); //liste de liste de int
}
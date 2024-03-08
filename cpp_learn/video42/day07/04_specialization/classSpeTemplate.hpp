#include <iostream>
#include <iomanip>

//template generic utiliser dans tous les cas sauf si le 1er parametre et int ou les 2 parametre sont bool (cf plus bas)
template< typename T, typename U >

class Pair {
	public:
		//constructeur
		Pair <T, U >( T const & lhs, U const & rhs) : _lhs( lhs ), _rhs( rhs )
		{
			std::cout << "Generic template" << std::endl;
			return;
		}
		//destructeur
		~Pair< T, U >( void ) { }

		//accesseur
		T const & fst( void ) const { return this->_lhs; }
		U const & snd( void ) const { return this->_rhs; }

	private:
		T const &_lhs;
		U const &_rhs;

		Pair< T, U >( void );
};

/********************************/
// template utiliser lorsque le 1er parametre est de type int

template< typename U >

class Pair <int, U>{
	public:
		//constructeur
		Pair <int, U >( int lhs, U const & rhs) : _lhs( lhs ), _rhs( rhs )
		{
			std::cout << "Int partial specialization" << std::endl;
			return;
		}
		//destructeur
		~Pair< int, U >( void ) { }

		//accesseur
		int fst( void ) const { return this->_lhs; }
		U const & snd( void ) const { return this->_rhs; }

	private:
		int _lhs;
		U const &_rhs;

		Pair< int, U >( void );
};


/********************************/

// template utiliser losque les deux paramtre sont de type bool
template< >

class Pair <bool, bool>{
	public:
		//constructeur
		Pair <bool, bool>( bool lhs, bool rhs)
		{
			std::cout << "Bool/bool complete specialization" << std::endl;
			this->_n = 0;
			this->_n |= static_cast<int>(lhs) << 0; //|= ou egale
			this->_n |= static_cast<int>(rhs) << 1;
			return;
		}
		//destructeur
		~Pair<bool, bool>( void ) { }

		bool fst( void ) const { return (this->_n &0x01); }
		bool snd( void ) const { return (this->_n &0x02); }

	private:
		int _n;

		Pair< bool, bool >( void );
};


template< typename T, typename U >

std::ostream & operator<<( std::ostream & o, Pair< T, U > const & p ) {
	o << "Pair( " << p.fst() << ", " << p.snd() << " )";
	return o;
}

std::ostream & operator<<( std::ostream & o, Pair< bool, bool > const & p ) {
	o << "Pair( " << p.fst() << ", " << p.snd() << " )";
	return o;
}
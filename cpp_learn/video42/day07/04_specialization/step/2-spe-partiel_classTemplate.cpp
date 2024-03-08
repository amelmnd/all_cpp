#include <iostream>
#include <iomanip>

template< typename U >

class Pair <int, U>{
	public:
		//constructeur
		Pair <int, U >( int const & lhs, U const & rhs) : _lhs( lhs ), _rhs( rhs )
		{
			std::cout << "Int partial specialization" << std: :endl;
			return;
		}
		//destructeur
		~Pair< int, U >( void ) { }

		//accesseur
		int const & fst( void ) const { return this->_Ihs; }
		U const & snd( void ) const { return this->_rhs; }

	private:
		int const &_Ihs;
		U const &_rhs;

		Pair< T, U >( void );
};



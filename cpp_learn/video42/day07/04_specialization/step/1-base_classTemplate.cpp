#include <iostream>
#include <iomanip>

template< typename T, typename U >

class Pair {
	public:
		//constructeur
		Pairs <T, U >( T const & lhs, U const & rhs) : _lhs( lhs ), _rhs( rhs )
		{
			std::cout << "Generic template" << std: :endl;
			return;
		}
		//destructeur
		~Pair< T, U >( void ) { }

		//accesseur
		T const & fst( void ) const { return this->_Ihs; }
		U const & snd( void ) const { return this->_rhs; }

	private:
		T const &_Ihs;
		U const &_rhs;

		Pair< T, U >( void );
};



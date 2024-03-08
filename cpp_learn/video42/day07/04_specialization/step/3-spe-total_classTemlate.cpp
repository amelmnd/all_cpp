#include <iostream>
#include <iomanip>

template< >

class Pair <bool, bool>{
	public:
		//constructeur
		Pair <bool, bool>( bool lhs, bool rhs)
		{
			std::cout << "Bool/bool complete specialization" << std::endl;
			this->_n = 0;
			this->_n = static_cast<int>(lhs) << 0;
			this->_n = static_cast<int>(lhs) << 1;
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


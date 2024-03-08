#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <exception>
#include <iostream>

# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

class BaseMachine {
	private:
		BaseMachine( const BaseMachine& src );
		BaseMachine&	operator=( const BaseMachine& rhs );

	public:
		BaseMachine( void ) {};
		~BaseMachine( void ) {};

		Base*	generate( void );
		void	identify( Base* p );
		void	identify( Base& p );

};

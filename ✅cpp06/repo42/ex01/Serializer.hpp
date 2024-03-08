#pragma once

# include "Data.hpp"
# include <stdint.h>

class Serializer {
	private:
		Serializer( const Serializer& src );
		Serializer&	operator=( const Serializer& rhs );

	public:
		Serializer( void );
		~Serializer( void );

		static uintptr_t	serialize( Data* ptr );
		static Data*		deserialize( uintptr_t raw );
};

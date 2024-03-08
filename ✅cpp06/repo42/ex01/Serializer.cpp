#include "Serializer.hpp"
#include "Data.hpp"

Serializer::Serializer( void )
{
	// std::cout << "Data default constructor call" << std::endl;
}

Serializer::~Serializer( void )
{
	// std::cout << "Data destructor call" << std::endl;
}

uintptr_t	Serializer::serialize( Data* ptr ) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		Serializer::deserialize( uintptr_t raw ) {
	return (reinterpret_cast<Data *>(raw));
}

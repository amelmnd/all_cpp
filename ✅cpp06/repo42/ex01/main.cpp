#include "Serializer.hpp"
#include "Data.hpp"

int	main(void) {

	Data*		xyz = new Data(4, 5, 2);
	Serializer	serial;

	uintptr_t	serialized = serial.serialize(xyz);
	Data*		deserialized = serial.deserialize(serialized);

	if (xyz == deserialized)
	{
		std::cout << "Serialization successful!" << std::endl;
		std::cout << xyz << " = " << deserialized << std::endl;
	}
	else
		std::cerr << "Serialization failed." << std::endl;

	delete xyz;

	return (0);
}
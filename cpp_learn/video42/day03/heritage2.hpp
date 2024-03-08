#include <string>

class Animal
{
	private:
		int _number0fLegs;
	public:
		Animal();
		Animal(Animal const &);
		Animal& operator=(Animal const &);
		~Animal();

		void run(int distance);
};

class Cat
{
	public:
		Cat();
		Cat(Cat const &);
		Cat& operator=(Cat const &);
		~Cat();

		void scornSomeone(std::string const & target);
};

class Pony : Animal
{

	public:
		Pony();
		Pony(Pony const &);
		Pony &operator-(Pony const &);
		~Pony();

		void doMagic(std::string const &target);
		void run(int distance); //possible remplace la fn du parent
};
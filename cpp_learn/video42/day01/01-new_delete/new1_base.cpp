#include <iostream>
#include <string>

class Student
{
	private:
		std::string _login;

	public:
		Student(std::string login): _login(login)
		{
			std::cout << "Student " << this->_login << " is born" << std::endl;
		}
		~Student()
		{
			std::cout << "Student " << this->_login << " died" << std::endl;
		}
};

int main()
{
	// allocation static sur la pil de bob
	Student bob = Student("bfubar");

	// allocation dynamique de jim
	Student* jim = new Student("jfubar");

	// Do some stuff here

	delete (jim); // jim is destroy
	return (0); // bob is destroy
}
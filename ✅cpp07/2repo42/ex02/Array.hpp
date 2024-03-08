#pragma once

#include <iostream>
#include <string>

template <typename T>
class Array
{
	private:
		T* _tab;
		unsigned int _size;

	public:
		Array(): _tab(NULL), _size(0)
		{
			std::cout << "Array empty constructor call" << std::endl;
		};
		Array(unsigned int n): _size(n)
		{
			_size = n;
			_tab = new T[n];
			for (unsigned int i = 0; i < _size; i++)
			{
				_tab[i] = static_cast<T>(i);
			}
			std::cout << "Array with arg constructor call" << std::endl;
		};

		Array(const Array<T>& src): _size(src._size)
		{
			_tab = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
			{
				_tab[i] = src._tab[i];
			}
			std::cout << "Array constructor by copy call" << std::endl;
		}

		~Array() {
			delete[] _tab;
			std::cout << "Array destructor call and delete data" << std::endl;
		};


		class BadIndex : public std::exception
		{
			public:
				virtual const char * what() const throw ()
				{
					return ("Error : index is out of bounds");
				}
		};

		Array<T>& operator=(const Array<T>& src)
		{
			delete[] _tab;
			_size = src._size;
			_tab = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
			{
				_tab[i] = src._tab[i];
			}
			std::cout << "Array assignment operator call" << std::endl;
		}
		T& operator[](unsigned int index)
		{
			if (_size != 0  && index < _size)
				return _tab[index];
			else
				throw BadIndex();
		}



		size_t getSize() const {
			return this->_size;
		}
		void setArray(unsigned int index, T value)
		{
			if (_size != 0  && index < _size)
				_tab[index] = value;
			else
				throw BadIndex();
		}
		void printArray()
		{
			if (_size == 0)
				return;
			for (unsigned int i = 0; i < _size; i++)
			{
				std::cout << "|" << _tab[i];
			}
			std::cout << std::endl;
		}
};

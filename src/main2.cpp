
#include <iostream>
#include "task2.h"



template<class T> 
T gen()
{
	static T t = 65;
	return t++;
}


int main()
{
	const unsigned  size = 5;
	char* charArray = createArr<char, size>(gen);
	double* doubleArray = createArr<double, size>(gen);

	for (size_t i = 0; i < size; i++)
	{
		std::cout << charArray[i] << ' ';
	}

	std::cout << "\n";
	for (size_t i = 0; i < size; i++)
	{
		std::cout << doubleArray[i] << ' ';
	}
	return 0;
}
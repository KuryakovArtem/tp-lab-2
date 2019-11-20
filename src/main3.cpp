#include "task3.h"
#include <string.h>

template<class T>

T change(T val)
{
	return val++;
}



template<>

char* change(char* val)
{
	size_t n = strlen(val);
	for (size_t i = 0; i < n; i++)
		val[i] = val[i]++;
	return val;
}
int main()
{
	const int size = 5;
	char arr[size] = { '1','2','3','4','5' };
	for (size_t i = 0; i < size; i++)
	{
		map<char, size>(arr, change);
	}
	int arr2[size] = { 1,2,3,4,5 };
	for (size_t i = 0; i < size; i++)
	{
		map<int, size>(arr2, change);
	}
	return 0;
} 
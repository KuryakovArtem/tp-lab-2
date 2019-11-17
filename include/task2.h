#pragma once

template <typename T, size_t sizeArr>
T* createArr(T (* gen)())
{
	T* Arr = new T[sizeArr];
	for (size_t i = 0; i < sizeArr; i++)
	{
		Arr[i] = gen();
	}
	return Arr;
	
}

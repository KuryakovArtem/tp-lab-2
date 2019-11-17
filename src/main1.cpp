#include <iostream>
#include "task1.h"
#include "string.h"

#define SEP " "
using namespace std;
int main() 
{
	double* arr = new double[10]{ 10.3,9.6,7.78,8,6,3,5,1,4,2 };

	for (int i = 0; i < 10; i++) 
	{
		cout << arr[i] << SEP;
	}

	cout << "\n";
	msort(arr, 10);

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";

	char* b[10]{ (char*)"a",(char*)"ab",(char*)"abc",(char*)"aabcd",(char*)"abcde",(char*)"zcvab",(char*)"hffffd",(char*)"qaaxvz",(char*)"wxcvewszcvb",(char*)"iccftjhdj" };

	for (int i = 0; i < 10; i++)
	{
		cout << b[i] << SEP;
	}
	cout << "\n";
	msort(b, 10);

	for (int i = 0; i < 10; i++)
	{
		cout << b[i] << SEP;
	}

	return 0;
}
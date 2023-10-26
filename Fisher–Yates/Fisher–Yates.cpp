#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void InitRand()
{
	srand((unsigned int)time(NULL));
}

int main()
{
	int array[] = { 10, 20, 30, 40, 50 };
	int randarray[sizeof array / sizeof * array];
	int size = sizeof array / sizeof *array;
	int arraysize;
	int random;

	InitRand();

	for (int i = 0; i < size; i++)
	{
		arraysize = size - i;
		random = rand() % arraysize;
		randarray[i] = array[random];
		array[random] = array[arraysize - 1];
	}

	for (int i = 0; i < size; i++)
	{
		cout << randarray[i] << endl;
	}
	
}
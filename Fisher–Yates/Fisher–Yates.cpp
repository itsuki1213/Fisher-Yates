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
	int size = sizeof array / sizeof *array;
	int randarray;
	int random;
	int keep;

	InitRand();

	for (int i = size; i > 1; i--)
	{
		randarray = rand() % (i - 1);
		keep = array[i - 1];
		array[i - 1] = array[randarray];
		array[randarray] = keep;
	}

	for (int i = 0; i < size; i++)
	{
		cout << array[i] << endl;
	}
	
}
#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>


using namespace std;

int main()
{

	srand(time(0));
	unsigned long int rnd = 1 + rand() % 100;
	cout << rnd << endl;

	unsigned long int arr[1000];

		for (int i = 0; i<1000; i++)
		{
			rnd = rnd * 1664525 + 1013904223UL;
			cout << 1 + rnd % 100 << endl;
		}

		system("pause");

	return 0;
}

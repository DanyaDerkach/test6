#include <iostream> 
#include <iomanip> 
#include "windows.h"

using namespace std;

int main()
{
	int a, n = 5;
	cout << "Enter a =";
	cin >> a;
	float rez;
	int sum = 0;
	for (int i = 1; i < 6; i++)
	{
		sum = sum + pow(2, i) * a;
	}

	rez = 3.56 + sum;
	cout << "Y=" << rez << endl;

	system("pause");
	return 0;
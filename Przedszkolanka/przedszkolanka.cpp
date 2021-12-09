#include <iostream>
using namespace std;

int NWD(int a, int b);

int main()
{
	int t = 0;
	int numOne = 0, numTwo = 0, sweetsNWD = 0, sweetsNWW = 0;

	//Ilosc testow
	cin >> t;

	for (int i = 1; i <= t; ++i)
	{
		cin >> numOne >> numTwo;
		sweetsNWD = NWD(numOne, numTwo);
		sweetsNWW = numOne * numTwo / sweetsNWD;
		cout << sweetsNWW << endl;
	}

	return 0;
}

int NWD(int a, int b)
{
	while (a != b)
	{
		if (a > b) a -= b;
		else b -= a;
	}

	return a;
}
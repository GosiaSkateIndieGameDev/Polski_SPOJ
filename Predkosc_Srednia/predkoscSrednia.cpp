#include <iostream>
using namespace std;

int main()
{
	int t;
	int VOne, VTwo, VSr;
	
	cin >> t;
	
	for (int i = 0; i < t; i++)
	{
		cin >> VOne >> VTwo;
		VSr = (2 * VOne * VTwo) / (VOne + VTwo);
		cout << VSr << endl;
	}

	return 0;
}
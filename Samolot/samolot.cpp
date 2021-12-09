#include <iostream>
using namespace std;

int main()
{
	int nOne = 0, kOne = 0, howMuchOne = 0;
	int nTwo = 0, kTwo = 0, howMuchTwo = 0;
	int howMuchAll = 0;

	cin >> nOne >> kOne;
	cin >> nTwo >> kTwo;
	howMuchOne = nOne * kOne;
	howMuchTwo = nTwo * kTwo;
	howMuchAll = howMuchOne + howMuchTwo;

	cout << howMuchAll;

	return 0;
}
#include <iostream>
using namespace std;

int main()
{
	int t, nums, size, *tab;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cout << endl;
		cin >> size;

		tab = new int[size];

		for (int j = 0; j < size; j++)
		{
			cin >> nums;
			tab[j] = nums;
		}

		for (int j = size - 1; j >= 0; j--)
			cout << tab[j] << " ";

		delete[] tab;
	}

	return 0;
}
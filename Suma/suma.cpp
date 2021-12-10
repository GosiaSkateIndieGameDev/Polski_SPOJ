#include <iostream>
using namespace std;

int main()
{
	int num = 0, current = 0;

	while (cin >> num)
	{
		current += num;
		cout << current << endl;
	}

	return 0;
}
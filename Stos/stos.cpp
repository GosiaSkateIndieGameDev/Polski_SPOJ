#include <iostream>
using namespace std;

int main()
{
	int tab[10];
	char sign = ' ';
	int i = 0;
	int numbersToStack = 0;
	
	while (cin >> sign)
	{
		if (sign == '+')
		{
			cin >> numbersToStack;
			if (i >= 10) 
			    cout << ":(" << endl;
			else
			{
				tab[i++] = numbersToStack; 
				cout << ":)" << endl;
			}
		}
		if (sign == '-')
		{
			if (i <= 0) 
			    cout << ":(" << endl;
			else 
			    cout << tab[--i] << endl;
		}
	}

	return 0;
}
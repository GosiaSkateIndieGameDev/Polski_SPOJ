#include <iostream>
#include <vector>

int main()
{
	short numTab[3], sum = 0;
	for (size_t i = 0; i < 3; i++)
	{
		std::cin >> numTab[i];
		sum += numTab[i];
	}

	std::cout << sum;

	std::cin.get();
	std::cin.get();

	return 0;
}
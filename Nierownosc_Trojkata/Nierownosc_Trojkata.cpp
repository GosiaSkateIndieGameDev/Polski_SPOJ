#include <iostream>

int main()
{
	float triangleSideA, triangleSideB, triangleSideC;

	while (std::cin >> triangleSideA >> triangleSideB >> triangleSideC)
	{
		if (triangleSideA + triangleSideB > triangleSideC && triangleSideB + triangleSideC > triangleSideA && triangleSideA + triangleSideC > triangleSideB)
			std::cout << "1\n";
		else 
			std::cout << "0\n";
	}

	return 0;
}
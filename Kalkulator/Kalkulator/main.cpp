#include <iostream>

int addiction(int a, int b);
int substraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);
int modulo(int a, int b);

int main()
{
	char sign = ' ';
	int32_t numOne = 0, numTwo = 0;
	std::cin >> sign;
	std::cin >> numOne >> numTwo;

	switch (sign)
	{
	case '+':
		std::cout << addiction(numOne, numTwo) << std::endl;
		break;
	case '-':
		std::cout << substraction(numOne, numTwo) << std::endl;
		break;
	case '*':
		std::cout << multiplication(numOne, numTwo) << std::endl;
		break;
	case '/':
		std::cout << division(numOne, numTwo) << std::endl;
		break;
	case '%':
		std::cout << modulo(numOne, numTwo) << std::endl;
		break;
	}

	return 0;
}

int addiction(int a, int b)
{
	return a + b;
}

int substraction(int a, int b)
{
	return a - b;
}

int multiplication(int a, int b)
{
	return a * b;
}

int division(int a, int b)
{
	return a / b;
}

int modulo(int a, int b)
{
	return a % b;
}
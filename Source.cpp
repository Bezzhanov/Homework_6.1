#include <iostream>
#include "math_funcs.h"

int main() {
	setlocale(LC_ALL, "RU");
	int a{}, b{}, x{};
	std::cout << "¬ведите первое число: ";
	std::cin >> a;
	std::cout << std::endl << "¬ведите второе число: ";
	std::cin >> b;
	std::cout << "¬ыберите операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	std::cin >> x;
	switch (x)
	{
	case 1:
		std::cout << a << " сложить с " << b << " = " << addition(a, b) << std::endl;
		break;
	case 2:
		std::cout << "»з " << a << " вычесть " << b << " = " << subtraction(a, b) << std::endl;
		break;
	case 3:
		std::cout << a << " умножить на " << b << " = " << multiply(a, b) << std::endl;
		break;
	case 4:
		std::cout << a << " разделить на " << b << " = " << division(a, b) << std::endl;
		break;
	case 5:
		std::cout << a << " в степени " << b << " = " << exponentiation(a, b) << std::endl;
		break;

	default:
		break;
	}

}
#include <iostream>
#include "math_funcs.h"

int main() {
	setlocale(LC_ALL, "RU");
	int a{}, b{}, x{};
	std::cout << "������� ������ �����: ";
	std::cin >> a;
	std::cout << std::endl << "������� ������ �����: ";
	std::cin >> b;
	std::cout << "�������� �������� (1 - ��������, 2 - ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������): ";
	std::cin >> x;
	switch (x)
	{
	case 1:
		std::cout << a << " ������� � " << b << " = " << addition(a, b) << std::endl;
		break;
	case 2:
		std::cout << "�� " << a << " ������� " << b << " = " << subtraction(a, b) << std::endl;
		break;
	case 3:
		std::cout << a << " �������� �� " << b << " = " << multiply(a, b) << std::endl;
		break;
	case 4:
		std::cout << a << " ��������� �� " << b << " = " << division(a, b) << std::endl;
		break;
	case 5:
		std::cout << a << " � ������� " << b << " = " << exponentiation(a, b) << std::endl;
		break;

	default:
		break;
	}

}
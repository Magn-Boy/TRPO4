#include <iostream>

using namespace std;

int main()
{
	double A, B, C;
	int m;
	cout << "Выберите номер операции(1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление): ";
	cout >> m;
	cout << "Задайте значения A и B: \n";
	cin >> A >> B;
	if (A == 0 || B == 0)
		cout << "Неверное значение\n";
	case 1: std::cout << "Результат: " << A + B; break;
	case 2: std::cout << "Результат: " << A - B; break;
	case 3: std::cout << "Результат: " << A * B; break;
	case 4: std::cout << "Результат: " << A / B; break;

		return 0;
}
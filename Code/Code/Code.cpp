#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int N, c, count = 0;
	cout << "Число N должно быть больше 0\n";
	cout << "Введите число N:\n";
	do {
		cin >> N;
		if (N < 0) cout << "Введите число N:\n";
	} while (N < 0);
	while (N > 0) {
		c = N % 10;
		N = N / 10;
		count++;
		if (count = 1)
			cout << "Единицы: " << c << endl;
		if (count = 2)
			cout << "Единицы: " << c << endl;
		cout << "Десятки: " << c << endl;
		if (count = 3)
			cout << "Единицы: " << c << endl;
		cout << "Десятки: " << c << endl;
		cout << "Сотни: " << c << endl;
		if (count = 4)
			cout << "Единицы: " << c << endl;
		cout << "Десятки: " << c << endl;
		cout << "Сотни: " << c << endl
			cout << "Тысячи: " << c << endl;
		if (count = 5)
			cout << "Единицы: " << c << endl;
		cout << "Десятки: " << c << endl;
		cout << "Сотни: " << c << endl
			cout << "Тысячи: " << c << endl;
		cout << "Десятки тысяч: " << c << endl;
		if (count = 5)
			cout << "Единицы: " << c << endl;
		cout << "Десятки: " << c << endl;
		cout << "Сотни: " << c << endl
			cout << "Тысячи: " << c << endl;
		cout << "Десятки тысяч: " << c << endl;
		cout << "Сотни тысяч: " << c << endl;
	}
	return 0;
}
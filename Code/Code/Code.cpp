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
	while (N >= 1) {
		c = N % 10;
		N = N / 10;
		count++;
		if (count == 1)
			cout << "Единицы: " << c << endl;
		if (count == 2)
			cout << "Десятки: " << c << endl;
		if (count == 3)
			cout << "Сотни: " << c << endl;
		if (count == 4)
			cout << "Тысячи: " << c << endl;
		if (count == 5)
			cout << "Десятки тысяч: " << c << endl;
		if (count == 6)
			cout << "Сотни тысяч: " << c << endl;
		if (count == 7)
			cout << "Миллионы: " << c << endl;
		if (count == 8)
			cout << "Десятки миллионов: " << c << endl;
		if (count == 9)
			cout << "Сотни миллионов: " << c << endl;
		if (count == 10)
			cout << "Миллиарды: " << c << endl;
	}
	return 0;
}
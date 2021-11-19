﻿#include <iostream>
using namespace std;

int v1()
{
	//1. Поменять местами содержимое переменных A и B и вывести новые значения A и B.
	setlocale(LC_ALL, "Russian");
	double a, b, c;
	cout << "Введите значения для A и B\n";
	cin >> a >> b;
	c = a;
	a = b;
	b = c;
	cout << "A = " << a << "; B = " << b << endl;
	return 0;
}

int v2()
{
	//2. Даны переменные A, B, C.Изменить их значения, переместив содержимое A в B, B — в C, C — в A, и вывести новые значения переменных A, B, C.
	setlocale(LC_ALL, "Russian");
	double a, b, c, k;
	cout << "Введите значения для A, B и C\n";
	cin >> a >> b >> c;
	k = a;
	a = c;
	c = b;
	b = k;
	cout << "A = " << a << "; B = " << b << "; C = " << c << endl;
	return 0;
}

int v3()
{
	//3. Даны переменные A, B, C.Изменить их значения, переместив содержимое A в C, C — в B, B — в A, и вывести новые значения переменных A, B, C.
	setlocale(LC_ALL, "Russian");
	double a, b, c, k;
	cout << "Введите значения для A, B и C\n";
	cin >> a >> b >> c;
	k = a;
	a = b;
	b = c;
	c = k;
	cout << "A = " << a << "; B = " << b << "; C = " << c << endl;
	return 0;
}

int v4()
{
	//4. Найти значение функции y = 3x^6 − 6x^2 − 7 при данном значении x
	setlocale(LC_ALL, "Russian");
	double y, x, x2;
	cout << "Введите значение x\n";
	cin >> x;
	x2 = x * x;
	y = 3 * x2 * x2 * x2 - 6 * x2 - 7;
	cout << "y = 3x^6 - 6x^2 - 7\n";
	cout << "При x = " << x << " y = " << y << endl;
	return 0;
}

int v5()
{
	//5. Найти значение функции y = 4(x−3)^6 − 7(x−3)^3 + 2 при данном значении x
	setlocale(LC_ALL, "Russian");
	double y, x, x2;
	cout << "Введите значение x\n";
	cin >> x;
	x2 = (x - 3) * (x - 3);
	y = 4 * x2 * x2 * x2 - 7 * x2 * (x - 3) + 2;
	cout << "y = 4(x-3)^6 - 7(x-3)^3 + 2\n";
	cout << "При x = " << x << " y = " << y << endl;
	return 0;
}

int v6()
{
	//6. Дано число A.Вычислить A^8, используя вспомогательную переменную и три операции умножения.
	setlocale(LC_ALL, "Russian");
	double a, a2;
	cout << "Введите значение A\n";
	cin >> a;
	a2 = pow(a, 2);
	a = a2 * a2 * a2 * a2;
	cout << "A^8 = " << a << endl;
	return 0;
}

int v7()
{
	//7. Дано число A.Вычислить A^15, используя две вспомогательные переменные и пять операций умножения.
	setlocale(LC_ALL, "Russian");
	double a, a1, a2;
	cout << "Введите значение A\n";
	cin >> a;
	a1 = pow(a, 7);
	a2 = pow(a, 4);
	a = a1 * a2 * a * a * a * a;
	cout << "A^15 = " << a << endl;
	return 0;
}

int main()
{
	v1();
	v2();
	v3();
	v4();
	v5();
	v6();
	v7();
	return 0;
}
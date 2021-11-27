﻿#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Задание 1. Найти расстояние между двумя точками с заданными координатами (x1, y1) и (x2, y2)\n";
	double x1, x2, y1, y2, l;
	cout << "Введите координаты первой точки\n";
	cin >> x1 >> y1;
	cout << "Введите координаты второй точки\n";
	cin >> x2 >> y2;
	l = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	cout << "Расстояние между точками = " << l << endl;

	cout << "\nЗадание 2. Даны три точки A, B, C на числовой оси. Найти длины отрезков AC и BC и их сумму.\n";
	double a, b, c;
	cout << "\nВведите 3 точки A,B,C на числовой оси\n";
	cin >> a >> b >> c;
	a = abs(a - c);
	b = abs(b - c);
	c = a + b;
	cout << "AC= " << a << " BC= " << b << " Сумма AC и BC= " << c << endl;

	cout << "\nЗадание 3. Даны три точки A, B, C на числовой оси. Точка C расположена между точками A и B.Найти произведение длин отрезков AC и BC\n";
	double P;
	g1: cout << "\nВведите A,B,C так, чтобы С была между А и В\n";
	cout << "A=";
	cin >> a;
	cout << "B=";
	cin >> b;
	cout << "C=";
	cin >> c;
	if (((c > a) && (c < b)) || ((c < a) && (c > b)))
	{
		P = abs(a - c) * abs(b - c);
		cout << "Произведение длин отрезков AC и BC = " << P << endl;
	}
	else
	{
		cout << "Ошибка. т.C расположена НЕ между А и В\n";
		goto g1;
	}

	cout << "\nЗадание 4. Даны координаты двух противоположных вершин прямоугольника:(x1, y1), (x2, y2).Стороны прямоугольника параллельны осям координат.Найти периметр и площадь данного прямоугольника.\n";
	double S;
	cout << "\nВведите координаты двух противоположных вершин прямоугольника\n";
	cout << "Введите координаты первой точки\n";
	cin >> x1 >> y1;
	cout << "Введите координаты второй точки\n";
	cin >> x2 >> y2;
	P = (abs(x2 - x1) + abs(y2 - y1)) * 2;
	S = abs(x2 - x1) * abs(y2 - y1);
	cout << "Периметр = " << P << "; Площадь = " << S << endl;

	cout << "\nЗадание 5. Даны координаты трех вершин треугольника: (x1, y1), (x2, y2), (x3, y3). Найти его периметр и площадь\n";
	double x3, y3;
	cout << "\nВведите вершины треугольника\n";
	cout << "Введите координаты первой вершины\n";
	cin >> x1 >> y1;
	cout << "Введите координаты второй вершины\n";
	cin >> x2 >> y2;
	cout << "Введите координаты третьей вершины\n";
	cin >> x3 >> y3;
	P = sqrt(abs(x2 - x1) * abs(x2 - x1) + abs(y2 - y1) * abs(y2 - y1)) + sqrt(abs(x3 - x2) * abs(x3 - x2) + abs(y3 - y2) * abs(y3 - y2)) + sqrt(abs(x1 - x3) * abs(x1 - x3) + abs(y1 - y3) * abs(y1 - y3));
	S = sqrt(P/2 * (P/2 - sqrt(abs(x2 - x1) * abs(x2 - x1) + abs(y2 - y1) * abs(y2 - y1))) * (P/2 - sqrt(abs(x3 - x2) * abs(x3 - x2) + abs(y3 - y2) * abs(y3 - y2))) * (P/2 - sqrt(abs(x1 - x3) * abs(x1 - x3) + abs(y1 - y3) * abs(y1 - y3))));
	cout << "Периметр треугольника = " << P << "; Площадь = " << S << endl;
}
#include <iostream>
#include <cmath>
using namespace std;

double PowerA3(double a, double b = 0)
{
	b = a * a * a;
	return b;
}

int Sign(double x)
{
	if (x < 0)
		return -1;
	else if (x > 0)
		return 1;
	else
		return 0;
}

double RingS(double r1, double r2)
{
	return 3.14 * (r1 * r1 - r2 * r2);
}

int Quarter(double x, double y)
{
	if (x > 0 && y > 0)
		cout << " I четверть\n\n";
	if (x < 0 && y > 0)
		cout << " II четверть\n\n";
	if (x < 0 && y < 0)
		cout << " III четверть\n\n";
	if (x > 0 && y < 0)
		cout << " IV четверть\n\n";
	return 0;
}

double Fact2(int n)
{
	double a = 1;
	for (int i = 1; i <= n; i++)
	{
		if ((n % 2 == 0) && (i % 2 == 0))
			a = a * (double)i;
		if ((n % 2 == 1) && (i % 2 == 1))
			a = a * (double)i;
	}
	return a;
}

int v1()
{
	setlocale(LC_ALL, "Russian");
	cout << "Задание 1. Описать функцию PowerA3(A, B), вычисляющую третью степень числа A и возвращающую ее в переменной B (A — входной, B — выходной параметр; оба параметра являются вещественными). С помощью этой функции найти третьи степени пяти данных чисел.\n\n";
	double a, b;
	for (int i = 0; i < 5; i++)
	{
		cout << "Введите A\n";
		cin >> a;
		cout << a << "^3 = " << PowerA3(a) << "\n\n";
	}
	return 0;
}

int v2()
{
	setlocale(LC_ALL, "Russian");
	cout << "Задание 2. Описать функцию Sign(X) целого типа, возвращающую для вещественного числа X следующие значения: -1, если X < 0; 0, если X = 0; 1, если X > 0. С помощью этой функции найти значение выражения Sign(A) + Sign(B) для данных вещественных чисел A и B.\n\n";
	double a, b;
	cout << "Введите числа A и B\n";
	cin >> a >> b;
	cout << "Sign(A) + Sign(B) = " << Sign(a) + Sign(b) << "\n\n";
	return 0;
}

int v3()
{
	setlocale(LC_ALL, "Russian");
	cout << "Задание 3. Описать функцию RingS(R1, R2) вещественного типа, находящую площадь кольца, заключенного между двумя окружностями с общим центром и радиусами R1 и R2 (R1 и R2 — вещественные, R1 > R2). С ее помощью найти площади трех колец, для которых даны внешние и внутренние радиусы.\n\n";
	double r1, r2;
	for (int i = 0; i < 3; i++)
	{
		cout << "Введите радиусы R1 и R2 (R1 > R2)\n";
		cin >> r1 >> r2;
		cout << "Площадь кольца = " << RingS(r1, r2) << "\n\n";
	}
	return 0;
}

int v4()
{
	setlocale(LC_ALL, "Russian");
	cout << "Задание 4. Описать функцию Quarter(x, y) целого типа, определяющую номер координатной четверти, в которой находится точка с ненулевыми вещественными координатами (x, y). С помощью этой функции найти номера координатных четвертей для трех точек с данными ненулевыми координатами\n\n";
	double x, y;
	for (int i = 0; i < 3; i++)
	{
		cout << "Введите ненулевые координаты X и Y\n";
		cin >> x >> y;
		Quarter(x, y);
	}
	return 0;
}

int v5()
{
	setlocale(LC_ALL, "Russian");
	cout << "Задание 5. Описать функцию Fact2(N) вещественного типа, вычисляющую двойной факториал: N!!= 1*3*5* ... *N, если N - нечетное; N!!= 2*4*6* ... *N, если N - четное(N > 0 — параметр целого типа; вещественное возвращаемое значение используется для того, чтобы избежать целочисленного переполнения при больших значениях N).\n\n";
	int n;
	cout << "Введите N\n";
	cin >> n;
	cout << "N!! = " << Fact2(n) << "\n\n";
	return 0;
}

int main()
{
	v1();
	v2();
	v3();
	v4();
	v5();
}
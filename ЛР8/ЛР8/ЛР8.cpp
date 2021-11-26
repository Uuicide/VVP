﻿#include <iostream>
using namespace std;

int v1()
{
	setlocale(LC_ALL, "Russian");
	cout << "1. Дан размер файла в байтах. Найти количество полных килобайтов, которые занимает данный файл\n";
	double b;
	cout << "Введите размер файла в байтах\n";
	cin >> b;
	b = b / 1024;
	b = trunc(b);
	cout << "Данный файл занимает " << b << " полных килобайтов\n";
	return 0;
}

int v2()
{
	setlocale(LC_ALL, "Russian");
	cout << "\n2. Даны целые положительные числа A и B (A > B). На отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений). Найти количество отрезков B, размещенных на отрезке A.\n";
	int a, b;
	l1: cout << "Введите длину отрезка А и В так, чтобы отрезок А был больше В\n";
	cin >> a >> b;
	if (a < b)
	{
		cout << "ОШИБКА! А должен быть больше В\n";
		goto l1;
	}
	else
	{
		a = a / b;
		a = trunc(a);
		cout << "На отрезке А помещается " << a << " раз отрезок В\n";
	}
	return 0;
}

int v3()
{
	setlocale(LC_ALL, "Russian");
	cout << "\n3. Даны целые положительные числа A и B (A > B). На отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений). Найти длину незанятой части отрезка A.\n";
	int a, b, k;
	l1: cout << "Введите длину отрезка А и В так, чтобы отрезок А был больше В\n";
	cin >> a >> b;
	if (a < b)
	{
		cout << "ОШИБКА! А должен быть больше В\n";
		goto l1;
	}
	else
	{
		k = trunc(a / b);
		a = a - k * b;
		cout << "После размещения на отрезке А отрезков В, незанятая часть = " << a << endl;
	}
	return 0;
}

int v4()
{
	setlocale(LC_ALL, "Russian");
	cout << "\n4. Дано двузначное число. Вывести число, полученное при перестановке цифр исходного числа.\n";
	int a, a1, a2;
	cout << "Введите двузначное число\n";
	cin >> a;
	a1 = a / 10;
	a2 = a % 10;
	a = a2 * 10 + a1;
	cout << a << ", число записано наоборот)\n";
	return 0;
}

int v5()
{
	setlocale(LC_ALL, "Russian");
	cout << "\n5.Дано трехзначное число. В нем зачеркнули первую слева цифру и приписали ее справа. Вывести полученное число.\n";
	int a, a1, a23;
	cout << "Введите трехзначное число\n";
	cin >> a;
	a1 = a / 100;
	a23 = a % 100;
	a = a23 * 10 + a1;
	cout << a << endl;
	return 0;
}
int main()
{
	v1();
	v2();
	v3();
	v4();
	v5();
	return 0;
}
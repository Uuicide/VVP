#include <iostream>
#include <cmath>
using namespace std;

int v1()
{
	setlocale(LC_ALL, "Russian");
	cout << "Задание 1. Дано целое число N (> 0). Сформировать и вывести целочисленный массив размера N, содержащий N первых положительных нечетных чисел: 1, 3, 5, ...\n\n";
	int n;
	cout << "Введите размер массива N\n";
	cin >> n;
	int* Arr = new int[n];
	cout << "Массив размера N содержащий N первых положительных нечетных чисел:\n";
	cout << "[ ";
	for (int i = 0; i < n; i++)
		Arr[i] = 1 + i * 2;
	for (int i = 0; i < n; i++)
		cout << Arr[i] << " ";
	cout << "]\n\n";
	delete[] Arr;
	return 0;
}

int v2()
{
	setlocale(LC_ALL, "Russian");
	cout << "Задание 2. Дано целое число N (> 1), а также первый член A и знаменатель D геометрической прогрессии. Сформировать и вывести массив размера N, содержащий N первых членов данной прогрессии: A, A*D, A*D^2, A*D^3, ...\n\n";
	int n, a, d;
	cout << "Введите размер массива N\n";
	cin >> n;
	int* Arr = new int[n];
	cout << "Введите первый член геометрической прогрессии\n";
	cin >> a;
	cout << "Введите знаменатель геометрической прогрессии\n";
	cin >> d;
	cout << "Массив размера N содержащий N членов геом прогрессии:\n";
	cout << "[ ";
	for (int i = 0; i < n; i++)
		Arr[i] = a * pow(d, i);
	for (int i = 0; i < n; i++)
		cout << Arr[i] << " ";
	cout << "]\n\n";
	delete[] Arr;
	return 0;
}

int v3()
{
	setlocale(LC_ALL, "Russian");
	cout << "Задание 3. Даны целые числа N (> 2), A и B. Сформировать и вывести целочисленный массив размера N, первый элемент которого равен A, второй равен B, а каждый последующий элемент равен сумме всех предыдущих\n\n";
	int n, a, b, s;
	cout << "Введите размер массива N\n";
	cin >> n;
	int* Arr = new int[n];
	cout << "Введите первый элемент массива N\n";
	cin >> a;
	cout << "Введите второй элемент массива N\n";
	cin >> b;
	Arr[0] = a;
	Arr[1] = b;
	cout << "Целочисленный массив размера N, первый элемент которого равен A, второй равен B, а каждый последующий элемент равен сумме всех предыдущих\n";
	cout << "[ ";
	for (int i = 2; i < n; i++)
	{
		s = 0;
		for (int j = 0; j < i; j++)
			s = s + Arr[j];
		Arr[i] = s;
	}
	for (int i = 0; i < n; i++)
		cout << Arr[i] << " ";
	cout << "]\n\n";
	delete[] Arr;
	return 0;
}

int v4()
{
	setlocale(LC_ALL, "Russian");
	cout << "Задание 4. Дан массив A размера N. Вывести его элементы в следующем порядке: A(1), A(N) , A(2), A(N-1), A(3), A(N-2) ...\n\n";
	int n;
	cout << "Введите размер массива N\n";
	cin >> n;
	int* Arr = new int[n];
	cout << "Введите элементы массива\n";
	for (int i = 0; i < n; i++)
		cin >> Arr[i];
	cout << "[ ";
	for (int i = 0; i < n / 2; i++)
	{
		cout << Arr[i] << " ";
		cout << Arr[n - 1 - i] << " ";
	}
	if (n % 2 == 1)
		cout << Arr[n / 2] << " ";
	cout << "]\n\n";
	delete[] Arr;
	return 0;
}

int v5()
{
	setlocale(LC_ALL, "Russian");
	cout << "Задание 5. Дан массив A размера N. Вывести вначале его элементы с нечетными номерами в порядке возрастания номеров, а затем - элементы с четными номерами в порядке убывания номеров\n\n";
	int n;
	cout << "Введите размер массива N\n";
	cin >> n;
	int* Arr = new int[n];
	cout << "Введите элементы массива\n";
	for (int i = 0; i < n; i++)
		cin >> Arr[i];
	cout << "Элементы с нечетными номерами в порядке возрастания номеров:\n";
	for (int i = 0; i < n; i += 2)
		cout << Arr[i] << " ";
	cout << "\nЭлементы с четными номерами в порядке убывания номеров:\n";
	if (n % 2 == 0)
		for (int i = n - 1; i >= 0; i -= 2)
			cout << Arr[i] << " ";
	else
		for (int i = n - 2; i >= 0; i -= 2)
			cout << Arr[i] << " ";
	cout << "\n\n";
	delete[] Arr;
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
#include <iostream>
#include <windows.h>
using namespace std;

int v1()
{
	setlocale(LC_ALL, "Russian");
	cout << "Задание 1. Дан номер дня – целое число от 1 до 31 и месяца — целое число в диапазоне 1–12 (1 — январь, 2 — февраль и т. д.). Вывести дату в виде текста (например, «пятое января»).\n\n";
	int d, m;
	cout << "Введите номер дня\n";
	cin >> d;
	cout << "Введите порядковый номер месяца\n";
	cin >> m;
	switch (d)
	{
	case 1:
		cout << "Первое ";
		break;
	case 2:
		cout << "Второе ";
		break;
	case 3:
		cout << "Третье ";
		break;
	case 4:
		cout << "Четвёртое ";
		break;
	case 5:
		cout << "Пятое ";
		break;
	case 6:
		cout << "Шестое ";
		break;
	case 7:
		cout << "Седьмое ";
		break;
	case 8:
		cout << "Восьмое ";
		break;
	case 9:
		cout << "Девятое ";
		break;
	case 10:
		cout << "Десятое ";
		break;
	case 11:
		cout << "Одиннадцатое ";
		break;
	case 12:
		cout << "Двенадцатое ";
		break;
	case 13:
		cout << "Тринадцатое ";
		break;
	case 14:
		cout << "Четырнадцатое ";
		break;
	case 15:
		cout << "Пятнадцатое ";
		break;
	case 16:
		cout << "Шестнадцатое ";
		break;
	case 17:
		cout << "Семнадцатое ";
		break;
	case 18:
		cout << "Восемнадцатое ";
		break;
	case 19:
		cout << "Девятнадцатое ";
		break;
	case 20:
		cout << "Двацатое ";
		break;
	case 21:
		cout << "Двадцать первое ";
		break;
	case 22:
		cout << "Двадцать второе ";
		break;
	case 23:
		cout << "Двадцать третье ";
		break;
	case 24:
		cout << "Двадцать четвёртое ";
		break;
	case 25:
		cout << "Двадцать пятое ";
		break;
	case 26:
		cout << "Двадцать шестое ";
		break;
	case 27:
		cout << "Двадцать седьмое ";
		break;
	case 28:
		cout << "Двадцать восьмое ";
		break;
	case 29:
		cout << "Двадцать девятое ";
		break;
	case 30:
		cout << "Тридцатое ";
		break;
	case 31:
		cout << "Тридцать первое ";
		break;
	}
	switch (m)
	{
	case 1:
		cout << "января\n\n";
		break;
	case 2:
		cout << "февраля\n\n";
		break;
	case 3:
		cout << "марта\n\n";
		break;
	case 4:
		cout << "апреля\n\n";
		break;
	case 5:
		cout << "мая\n\n";
		break;
	case 6:
		cout << "июня\n\n";
		break;
	case 7:
		cout << "июля\n\n";
		break;
	case 8:
		cout << "фвгуста\n\n";
		break;
	case 9:
		cout << "сентября\n\n";
		break;
	case 10:
		cout << "октября\n\n";
		break;
	case 11:
		cout << "ноября\n\n";
		break;
	case 12:
		cout << "декабря\n\n";
		break;
	}
	return 0;
}

int v2()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	cout << "Задание 2. Робот может перемещаться в четырех направлениях («С» — север, «З» — запад, «Ю» — юг, «В» — восток) и принимать три цифровые команды: 0 — продолжать движение, 1 — поворот налево, −1 — поворот направо. Дан символ C — исходное направление робота и целое число N — посланная ему команда. Вывести направление робота после выполнения полученной команды\n\n";
	int n;
	char c;
	cout << "Введите направление согласно обозначению («С» — север, «З» — запад, «Ю» — юг, «В» — восток)\n";
	cin >> c;
	cout << "Введите команду согласно обозначению (0 — продолжать движение, 1 — поворот налево, -1 — поворот направо)\n";
	cin >> n;
	switch (c)
	{
	case 'С':
		if (n == 0)
			c = 'C';
		if (n == 1)
			c = 'З';
		if (n == -1)
			c = 'В';
		break;
	case 'З':
		if (n == 0)
			c = 'З';
		if (n == 1)
			c = 'Ю';
		if (n == -1)
			c = 'С';
		break;
	case 'Ю':
		if (n == 0)
			c = 'Ю';
		if (n == 1)
			c = 'В';
		if (n == -1)
			c = 'З';
		break;
	case 'В':
		if (n == 0)
			c = 'В';
		if (n == 1)
			c = 'С';
		if (n == -1)
			c = 'Ю';
		break;
	}
	cout << "Направление: " << c << "\n\n";
	return 0;
}

int v3()
{
	setlocale(LC_ALL, "Russian");
	cout << "Задание 3. Дано целое число в диапазоне 10–40, определяющее количество учебных заданий по некоторой теме. Вывести строку-описание указанного количества заданий, обеспечив правильное согласование числа со словами «учебное задание», например: 18 — «восемнадцать учебных заданий».\n\n";
	int a;
	cout << "Введите целое число от 10 до 40 определяющее количество учебных заданий\n";
	cin >> a;
	if (a / 10 == 1)
	{
		switch (a)
		{
		case 10:
			cout << "Десять учебных заданий.\n\n";
			break;
		case 11:
			cout << "Одиннадцать учебных заданий.\n\n";
			break;
		case 12:
			cout << "Двенадцать учебных заданий.\n\n";
			break;
		case 13:
			cout << "Тринадцать учебных заданий.\n\n";
			break;
		case 14:
			cout << "Четырнадцать учебных заданий.\n\n";
			break;
		case 15:
			cout << "Пятнадцать учебных заданий.\n\n";
			break;
		case 16:
			cout << "Шестнадцать учебных заданий.\n\n";
			break;
		case 17:
			cout << "Семнадцать учебных заданий.\n\n";
			break;
		case 18:
			cout << "Восемнадцать учебных заданий.\n\n";
			break;
		case 19:
			cout << "Девятнадцать учебных заданий.\n\n";
			break;
		}
	}
	else
	{
		switch (a / 10)
		{
		case 2:
			cout << "Двадцать ";
			break;
		case 3:
			cout << "Тридцать ";
			break;
		case 4:
			cout << "Сорок ";
			break;
		}
		switch (a % 10)
		{
		case 0:
			cout << "учебных заданий.\n\n";
			break;
		case 1:
			cout << "одно учебное задание.\n\n";
			break;
		case 2:
			cout << "два учебных задания.\n\n";
			break;
		case 3:
			cout << "три учебных задания.\n\n";
			break;
		case 4:
			cout << "четыре учебных задания.\n\n";
			break;
		case 5:
			cout << "пять учебных заданий.\n\n";
			break;
		case 6:
			cout << "шесть учебных заданий.\n\n";
			break;
		case 7:
			cout << "семь учебных заданий.\n\n";
			break;
		case 8:
			cout << "восемь учебных заданий.\n\n";
			break;
		case 9:
			cout << "девять учебных заданий.\n\n";
			break;
		}
	}
	return 0;
}

int v4()
{
	setlocale(LC_ALL, "Russian");
	cout << "Задание 4. Дано целое число в диапазоне 100–999. Вывести строку-описание данного числа, например: 256 — «двести пятьдесят шесть», 814 — «восемьсот четырнадцать».\n\n";
	int a;
	cout << "Введите целое число от 100 до 999\n";
	cin >> a;
	switch (a / 100)
	{
	case 1:
		cout << "Сто";
		break;
	case 2:
		cout << "Двести";
		break;
	case 3:
		cout << "Триста";
		break;
	case 4:
		cout << "Четыреста";
		break;
	case 5:
		cout << "Пятьсот";
		break;
	case 6:
		cout << "Шестьсот";
		break;
	case 7:
		cout << "Семьсот";
		break;
	case 8:
		cout << "Восемьсот";
		break;
	case 9:
		cout << "Девятьсот";
		break;
	}
	if ((a / 10) % 10 == 1)
	{
		switch (a % 100)
		{
		case 10:
			cout << " десять\n\n";
			break;
		case 11:
			cout << " одиннадцать\n\n";
			break;
		case 12:
			cout << " двенадцать\n\n";
			break;
		case 13:
			cout << " тринадцать\n\n";
			break;
		case 14:
			cout << " четырнадцать\n\n";
			break;
		case 15:
			cout << " пятнадцать\n\n";
			break;
		case 16:
			cout << " шестнадцать\n\n";
			break;
		case 17:
			cout << " семнадцать\n\n";
			break;
		case 18:
			cout << " восемнадцать\n\n";
			break;
		case 19:
			cout << " девятнадцать\n\n";
			break;
		}
	}
	else
	{
		switch (a / 10 % 10)
		{
		case 2:
			cout << " двадцать ";
			break;
		case 3:
			cout << " тридцать ";
			break;
		case 4:
			cout << " сорок ";
			break;
		case 5:
			cout << " пятьдесят ";
			break;
		case 6:
			cout << " шестьдесят ";
			break;
		case 7:
			cout << " семьдеят ";
			break;
		case 8:
			cout << " восемьдесят ";
			break;
		case 9:
			cout << " девяносто ";
			break;
		}
		switch (a % 10)
		{
		case 1:
			cout << "один\n\n";
			break;
		case 2:
			cout << "два\n\n";
			break;
		case 3:
			cout << "три\n\n";
			break;
		case 4:
			cout << "четыре\n\n";
			break;
		case 5:
			cout << "пять\n\n";
			break;
		case 6:
			cout << "шесть\n\n";
			break;
		case 7:
			cout << "семь\n\n";
			break;
		case 8:
			cout << "восемь\n\n";
			break;
		case 9:
			cout << "девять\n\n";
			break;
		}
	}
	return 0;
}

int v5()
{
	setlocale(LC_ALL, "Russian");
	cout << "Задание 5. В восточном календаре принят 60-летний цикл, состоящий из 12- летних подциклов, обозначаемых названиями цвета: зеленый, красный, желтый, белый и черный. В каждом подцикле годы носят названия животных: крысы, коровы, тигра, зайца, дракона, змеи, лошади, овцы, обезьяны, курицы, собаки и свиньи. По номеру года определить его название, если 1984 год — начало цикла: «год зеленой крысы».\n\n";
	int a;
	cout << "Введите год\n";
	cin >> a;
	cout << "Это год ";
	switch (a % 10)
	{
	case 0:
	case 1:
		cout << "бело";
		break;
	case 2:
	case 3:
		cout << "черно";
		break;
	case 4:
	case 5:
		cout << "зелено";
		break;
	case 6:
	case 7:
		cout << "красно";
	case 8:
	case 9:
		cout << "желто";
	}
	switch ((a + 8) % 12)
	{
	case 0:
		cout << "й крысы";
		break;
	case 1:
		cout << "й коровы";
		break;
	case 2:
		cout << "го тигра";
		break;
	case 3:
		cout << "го зайца";
		break;
	case 4:
		cout << "го дракона";
		break;
	case 5:
		cout << "й змеи";
		break;
	case 6:
		cout << "й лошади";
		break;
	case 7:
		cout << "й овцы";
		break;
	case 8:
		cout << "й обезьяны";
		break;
	case 9:
		cout << "й курицы";
		break;
	case 10:
		cout << "й собаки";
		break;
	case 11:
		cout << "й свиньи";
		break;
	}
	cout << "\n\n";
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
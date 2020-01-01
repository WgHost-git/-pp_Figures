
#include "windows.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	// Рисование прямоугольника

	int side1;
	int side2;

	cout << endl;
	cout << "ПРЯМОУГОЛЬНИК" << endl; cout << endl;
	cout << "Введите первую сторону прямоугольника: "; cin >> side1; cout << endl;
	cout << "Введите вторую сторону прямоугольника: "; cin >> side2; cout << endl;
	cout << endl;

	for (int i = 0; i < side2; i++) {
		for (int g = 0; g < side1; g++) {
			cout << "* ";
			Sleep(50);
		}
		cout << endl;
	}


	cout << endl;

	// РОМБ - полно-закрашенный

	cout << "РОМБ - полно-закращеный" << endl; cout << endl;

	int v;
	cout << "Введите размер стороны ромба: "; cin >> v; cout << endl;

	for (int a = 0; a < v; a++)
	{
		for (int b = a; b < v; b++)
		{
			cout << " ";
		}
		for (int c = -1; c < a; c++)
		{
			cout << "* ";
			Sleep(50);
		}
		cout << endl;
	}

	for (int a = 0; a < v; a++)
	{
		for (int b = -2; b < a; b++)
		{
			cout << " ";
		}

		for (int c = a; c < v - 1; c++)
		{
			cout << "* ";
			Sleep(50);
		}
		cout << endl;
	}

	cout << endl;

	// РОМБ - закрашенный на половину

	cout << "РОМБ - закрашенный на половину" << endl; cout << endl;

	int r;
	
	cout << "Введите размер стороны ромба: "; cin >> r; cout << endl;

	int g = r - 1;

	for (int i = 0; i < r; i++)
	{
		for (int k = 0; k < r; k++)
		{
			if (k == r - (i + 1))
			{
				cout << "*";
				Sleep(50);
			}
			else
			{
				cout << " ";
			}
		}
		for (int j = r; j < r + i; j++)
		{
			cout << "*";
			Sleep(50);
		}

		cout << endl;
	}

	for (int i = 0; i < g; i++)
	{
		for (int k = 0; k < g; k++)
		{
			if (i == k)
			{
				cout << " *";
				Sleep(50);
			}
			else
			{
				cout << " ";
			}
		}

		for (int j = 1; j < g - i; j++)
		{
			cout << "*";
			Sleep(50);
		}

		cout << endl;
	}

	cout << endl;

	// Звезда 

	cout << "ЗВЕЗДА" << endl; cout << endl;

	int number;

	do { // Проверка на четность
		cout << "Введите положительное !нечетное! число: "; cin >> number; cout << endl;
		if (number % 2 == 0) { cout << "Вы ввели четное чило повторите попытку!" << endl; cout << endl; }
		else { break; }
	} while (number % 2 == 0);

	int centr = (number - 1) / 2;

	for (int i = 0; i < number; i++)
	{
		for (int j = 0; j < number; j++) {
			if (i == j || i == centr || j == centr || j == (number - (i + 1)))
			{
				cout << "* ";
				Sleep(50);
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}

	cout << endl;
	cout << endl;

	// Куб

	cout << "КУБ" << endl; cout << endl;

	int a;
	cout << "Введите размер стороны куба: "; cin >> a; cout << endl;

	int b = a * 3;

	cout << endl;

	for (int i = 0; i < a; i++)
	{
		for (int k = 0; k < a; k++)
		{
			if (k == a - (i + 1))
			{
				cout << "*";
				Sleep(100);
			}
			else
			{
				cout << " ";
			}
		}
		for (int j = 0; j < a; j++)
		{
			if (i == j && i != 0)
			{
				cout << "* ";
				Sleep(100);
			}
			else if (i == 0 && j > a / 2 - 1)
			{
				cout << " *";
				Sleep(100);
			}
			else if (j != 0 && i != 0)
			{
				cout << " ";
			}
		}

		for (int m = a + 1; m < b; m++)
		{
			if (i == a - 1 && m < b - a)
			{
				cout << "* ";
				Sleep(100);
			}
			else if (i + a * 2 == m && i != 0)
			{
				cout << "*";
				Sleep(100);
			}
			else if (i == 0 && m < b / 2 + 1)
			{
				cout << " *";
				Sleep(100);
			}
			else if (i < a - 1)
			{
				cout << " ";
			}
		}

		cout << endl;
	}

	int d = a - 1;
	int c = b - 1;

	for (int i = 0; i < d; i++)
	{
		for (int k = 0; k < d; k++)
		{
			if (i == k)
			{
				cout << " *";
			}
			else
			{
				cout << " ";
			}
		}

		for (int k = 0; k < a; k++)
		{
			if (k == d - (i + 2) && i != d - 1)
			{
				cout << "*";
			}
			else if (i != d - 1)
			{
				cout << " ";
			}
			if (i == a - 2)
			{
				cout << " *";
			}
		}

		for (int v = d; v < c; v++)
		{
			if (v == c - (i + 3) && i != d - 1)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << endl; cout << endl;
	system("pause");
}





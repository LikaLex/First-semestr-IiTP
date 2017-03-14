#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

// Перевод из 9 в 10
int iz9v10(int argument)
{
	// Во избежание багов выведем любое однозначное число сразу
	if (argument < 10) return argument;
	else
	{
		int resultat = 0, razryadnost = 0, cifra = 0;
		// Получаем кол-во цифр аргумента
		for (int i = 10; i > 0; i--) {
			if (argument >= (int) powl(10, i))
			{
				razryadnost = i + 1;
				break;
			}
		}

		// Прибавляем к результату цифру, домноженную на 9 в степени
		for (int i = 1; i <= razryadnost; i++)
		{
			cifra = (argument % (int) powl(10, i)) / powl(10, i-1);
			resultat += cifra * (int) powl(9,i-1);
		}

		// Число переведено, возвращаем результат
		return resultat;
	}
}

// Перевод из 10 в 11
void iz10v11(int argument, int massiv[100])
{
	int iterator = 0;  // Индекс элемента в массиве

	// Забиваем массив 12-ками, чтобы потом их не выводить
	for (int i = 0; i < 100; i++) {
		massiv[i] = 12;
	}

	// Непосредственно перевод
	while(argument > 0)
	{
		massiv[iterator] = argument % 11;
		argument /= 11;
		iterator++;
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int number9;

	// Вводим число в 9-чной системе
	cout << "Enter number in 9-hold system: ";
	cin >> number9;

	// Проверяем на наличие девятки
	for (int i = 10; i > 0; i--)
	{
		int cifra = (number9 % (int) powl(10, i)) / powl(10, i-1);
		if (cifra == 9) {
			cout << "Fatal error. This number doesn't exist.";
			getch();
			return 1;
		}
	}

	// Переводим в десятичную систему
	int number10 = iz9v10(number9);

	// Переводим в 11-чную систему
	int massiv[100];
	iz10v11(number10, massiv);

	// Выводим массив в обратном порядке
	for (int i = 99; i >= 0 ; i--)
	{
		if (massiv[i] < 12)
		{
			if (massiv[i] == 10)
			{
				cout << "A";
			}
			else if (massiv[i] == 11)
			{
				cout << "B";
			}
			else cout << massiv[i];
		}
	}

	getch();
	return 0;
}

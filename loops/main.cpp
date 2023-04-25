#include <iostream>
#include <conio.h>
using namespace std;
//#define WHILE_1
//#define GETCH
#define SHOOTER
//#define BILET
void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE_1
	int i = 0; // счетчик цикла
	int n; // кол во итераций
	cout << "Введите кол-во итераций: "; cin >> n;
	while (i < n)
	{
		cout << i << "loops" << endl;
		i++;
	}
#endif // while1
#ifdef GETCH


	char key;
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	} while (true);
#endif // GETCH
	
#ifdef SHOOTER
	//w-119 a-97 s-115 d-100 enter-13 esc-27

	int button;
	button = 0;
	while (button != 27)
	{
		button   = _getch();
		switch (button)
		{
			{
		case 119: cout << "Вперед" << endl;
			break;
			}

			{
		case 97: cout << "Влево" << endl;
			break;
			}
			{
		case 115: cout << "Назад" << endl;
			break;
			}
			{
		case 100: cout << "Вправо" << endl;
			break;
			}
			{
		case 13: cout << "Огонь" << endl;
			break;
			}


		}
	}
#endif
#ifdef BILET


	int number, buffer, st1, st2, num1,num2,num3,num4,num5,num6;
	cout << "Введите число "; cin >> number;
	buffer = number;
	while (buffer>999)
	{
		buffer /= 10;
	}
	num1 = buffer % 10;
	num2 = buffer / 10 % 10;
	num3 = buffer / 100;
	st1 = num1 + num2 + num3;
	num4 = number % 10;
	num5 = number / 100 % 10;
	num6 = number / 1000 % 10;
	st2 = num4 + num5 + num6;
	if (st1==st2)
	{
		cout << "Билет счастливый" << endl;
	}
	else
	{
		cout << "Билет несчастлвый" << endl;
	}
#endif // BILET



}
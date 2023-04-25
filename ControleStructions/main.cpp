#include <iostream>
using namespace std;
//#define temp
void main()
{
	setlocale(LC_ALL, "rus");
#if defined temp
	int temperature;
	cout << "Введите температуру воздуха: "; cin >> temperature;
	if (temperature > 0)
	{
		cout << "На улице тепло" << endl;

	}
	else
	{
		cout << "На улице холодно" << endl;
	}

#endif
	int n;
	std::cout << "Введите число: "; std::cin >> n;
	if (n > 0 && n < 10)
	{
		std::cout << "Вы попали" << endl;
	}
	else
	{
		std::cout << "Вы промахнулись" << endl;
	}
}
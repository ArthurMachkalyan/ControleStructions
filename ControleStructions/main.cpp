#include <iostream>
using namespace std;
//#define temp
void main()
{
	setlocale(LC_ALL, "rus");
#if defined temp
	int temperature;
	cout << "������� ����������� �������: "; cin >> temperature;
	if (temperature > 0)
	{
		cout << "�� ����� �����" << endl;

	}
	else
	{
		cout << "�� ����� �������" << endl;
	}

#endif
	int n;
	std::cout << "������� �����: "; std::cin >> n;
	if (n > 0 && n < 10)
	{
		std::cout << "�� ������" << endl;
	}
	else
	{
		std::cout << "�� ������������" << endl;
	}
}
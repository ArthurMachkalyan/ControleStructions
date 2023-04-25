#include <iostream>
using namespace std;
//#define calc_if
#define calc_switch
void main()
{
	setlocale(LC_ALL, "");
#ifdef calc_if 
	//cout << "Calc" << endl;
	double a, b;
	char s;
	cout << "¬ведите простое арифметическое выражение: ";
	cin >> a >> s >> b;
	 if (s == '+')
	{
		cout << a << " + " << b << " = " << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << " - " << b << " = " << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << " * " << b << " = " << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << " / " << b << " = " << a / b << endl;
	}
	else
	{
		cout << "Error: No operation" << endl;
	}
#endif
#ifdef calc_switch
	 //калькул€тор при помощи SWITCH;
		 char operation;
		 double num1, num2;
	 std::cout << "¬ведите числа: "; std::cin >> num1 >> num2;
	 std::cout << "¬ведите математическое действие: "; 
 std::cin >> operation;
 

 switch (operation)
 {

 case '+':
	 std::cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
	 break;
 case '-':
	 std::cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
	 break;
 case '*':
	 std::cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
	 break;
 case '/':
	 std::cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
	 break;

 default:
	 std::cout << "я не знаю такого действи€" << endl;
	 break;
 }
#endif
}

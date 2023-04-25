#include <iostream>
using namespace std;
using std::cin;
using std::cout;
#define delimetr "------------------------"
#define UPPER_LEFT_ANGLE (char)218
#define UPPER_RIGHT_ANGLE (char)191
#define LOWER_LEFT_ANGLE (char)192
#define LOWER_RIGHT_ANGLE (char)217
#define HORIZONTAL_LINE (char)196
#define VERTICAL_LINE (char)179
#define	WHITE_BOX "\xDB\xDB" //char219
#define BLACK_BOX  "  "
//#define FIGURE
//#define CHESS
//#define HARDCHESS
//#define PASCAL	
void main()
{
	setlocale(LC_ALL, "");

#ifdef FIGURE


	int n;
	cout << "¬ведите размер: "; cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << delimetr << endl;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0;
			j < i;
			j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

	cout << delimetr << endl;

	for (int i = 0; i <= n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

	cout << delimetr << endl;

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "  ";
		}

		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

	cout << delimetr << endl;

	for (int i = 0; i <= n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "  ";
		}
		for (int j = 0; j < i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

	cout << delimetr << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << " ";
		}
		cout << "/";
		for (int j = 0; j < i; j++)
		{
			cout << "  ";
		}
		cout << "\\";
		cout << endl;

	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		cout << " \\";
		for (int j = i; j < n - 1; j++)
		{
			cout << "  ";
		}
		cout << "/";
		cout << endl;

	}
	cout << delimetr << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			((j + i) % 2 == 0) ? cout << "+ " : cout << "- ";
		}
		cout << endl;
	}

#endif // FIGURE

#ifdef CHESS
	setlocale(LC_ALL, " ");
	int size;
	cout << "¬ведите размер доски: "; cin >> size;
	size++;
	setlocale(LC_ALL, "C");
	for (int i = 0; i <= size; i++)
	{
		for (int j = 0; j <= size; j++)
		{
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == size)cout << UPPER_RIGHT_ANGLE;
			else if (i == size && j == 0)cout << LOWER_LEFT_ANGLE;
			else if (i == size && j == size)cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 || i == size)cout << HORIZONTAL_LINE << HORIZONTAL_LINE;
			else if (j == 0 || j == size)cout << VERTICAL_LINE;
			else cout << (i % 2 == j % 2 ? WHITE_BOX : BLACK_BOX);
		}
		cout << endl;
	}
#endif // CHESS
#ifdef HARDCHESS
	setlocale(LC_ALL, " ");
	int size;
	cout << "¬ведите размер доски "; cin >> size;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			for (int k = 0; k < size; k++)
			{
				for (int l = 0; l < size; l++)
				{
					if (i % 2 == k % 2)cout << "* ";
					else cout << "  ";
				}
			}
			cout << endl;
		}
	}









#endif // HARDCHESS

	
#ifdef PASCAL // не доделал

	int size;
	cout << "¬ведите размер: "; cin >> size;
	for (int i = 0; i < size; i++)
	{
		for (int j = i; j < size; j++)
		{
			cout << " ";
		}
		cout << "1";
		for (int j = 0; j < i; j++)
		{
			cout << " 1 ";
		}
		cout << "1";
		cout << endl;


#endif //  PASCAL

		
	

		

}
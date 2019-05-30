//ej2 hoja5 memoria dinámica

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;

int menu(int *option = new int)
{

	do
	{
		cout << endl;
		cout << "                 MEN" <<char(233) <<" DE OPCIONES                 \n";
		cout << " =============================================== \n";
		cout << " 4. Calcular Pi \n";
		cout << " 5. Gr" <<char(160) <<"fico \n";
		cout << " 6. Fin \n";
		cout << endl;
		cout << " Escoge una opci" << char(162) << "n: ";
		cin >> *option;
		cout << endl;

		return *option;

	} while (*option < 4 || *option >6);

}

void pi()
{
	int *n = new int;

	double *multpar = new double;
	*multpar = 1.0;

	double *multimpar = new double;
	*multimpar = 1.0;

	double *multfinal = new double;

	do
	{
		cout << " Ingrese N: ";
		cin >> *n;
		cout << endl;

	} while (*n < 0);

	for (int i = 2; i <= *n; i += 2)
	{

		*multpar = *multpar * i / (i + 1);

	}
	for (int i = 3; i <= *n; i += 2)
	{
		*multimpar = *multimpar * (i + 1) / i;

	}

	*multfinal = 4 * *multpar**multimpar;

	cout << " Resultado: " <<* multfinal;
	cout << endl;




	delete n;
	delete multpar;
	delete multimpar;
	delete multfinal;
}

void grafico()
{
	int a;
	int n;

	do
	{
		cout << " Ingrese el n" <<char(163) <<"mero para la gr" <<char(160)<<"fica: ";
		cin >> a;
		cout << endl;

	} while (a < 2 || a>9);

	for (int i = 1; i <= a; i++)
	{
		n = a;
		for (int j = 1; j <= a; j++)
		{
			if (i >= j)
			{
				cout << " " << n;
				n--;
			}
			else
			{
				cout << "  ";
			}
		}
		n = 1;
		for (int j = 2; j <= a; j++)
		{
			n++;
			if (a - i < j)
			{
				cout << " " << n;
			}
			else
			{
				cout << "  ";
			}
		}
		n = a;
		cout << endl;
	}
	//----------------mitad
	for (int i = 1; i <= a; i++)
	{
		n = a;
		for (int j = 1; j <= a; j++)
		{
			if (i <= a - j)
			{
				cout << " " << n;
				n--;
			}
			else
			{
				cout << "  ";
			}
		}
		n = 1;
		for (int j = 2; j <= a; j++)
		{
			n++;
			if (a - i > a - j)
			{
				cout << " " << n ;
			}
			else
			{
				cout << "  ";
			}
		}
		n = a;
		cout << endl;
	}
}

int main()
{

	int *n1 = new int;
	int opt1 = 1;
	int *opt;
	opt = &opt1;

	do
	{
		menu(opt);

		if (*opt == 4)
		{
			pi();
		}
		if (*opt == 5)
		{
			grafico();
		}
		if (*opt == 6)
		{
			return 0;
		}

		cout << endl;

		*n1 = 1;

	} while (*n1 == 1);

	delete n1;

	return 0;
}
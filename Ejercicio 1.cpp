#include <iostream>
#include <conio.h>

using namespace std;
using namespace System;

void main()
{
	int * pares;
	pares = new int[15];
	int aux;
	for (int i = 0; i < 15; i++)
	{
		cin >> aux;
		if (aux%2 == 0)
		{
			pares[i] = aux;
		}
		else
		{
			pares[i] = 0;
		}
	}
	for (int i = 0; i < 15; i++)
	{
		cout << "Numero[" << i << "] = " << pares[i] << endl;
	}
	delete[]pares;
	cout << endl; system("pause");

}



#include <iostream>

using namespace std;

void main() {
	double *nota = new double[15];
	for (int i = 0; i < 15; i++)
	{
		cin >> nota[i];
		if (nota[i] >= 0 && nota[i] <= 20)
		{
			nota[i] = nota[i];
		}
		else nota[i] = 0;
	}
	cout << endl;
	for (int i = 0; i < 15; i++)
	{
		cout << "Nota [" << i + 1 << "] = " << nota[i] << endl;
	}

	cout << endl; system("pause");
}
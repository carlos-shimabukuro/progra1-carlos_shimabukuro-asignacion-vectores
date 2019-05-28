#include <iostream>

using namespace std;

void main() {
	char *vocales = new char[5];

	for (int i = 0; i < 5; i++)
	{
		cin >> vocales[i];

	}
	for (int i = 0; i < 5; i++)
	{
		cout << "Vocal [" << i+1 << "] = " << vocales[i] << endl;
	}
	cout << endl; system("pause");
}

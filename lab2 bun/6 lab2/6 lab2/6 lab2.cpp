#include "functions.h"

using namespace std;

int main()
{
	int n;
	int a[20];
	float b[20];
	string c[20];

	cout << "Numar elemente: "; cin >> n;

	cout << "Numere intregi: ";
	read(n, a);
	sortare(n, a);
	write(n, a);
	cout << endl;

	cout << "Numere reale: ";
	read(n, b);
	sortare(n, b);
	write(n, b);
	cout << endl;

	cout << "Siruri de caractere: ";
	read(n, c);
	sortare(n, c);
	write(n, c);
	cout << endl;

	_getche();
	return 0;
}

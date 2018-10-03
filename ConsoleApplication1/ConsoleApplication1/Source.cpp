#include <iostream>
#include <conio.h>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
	int a;

	cout << "Podaj liczbe do zamiany na binarny";

	cin >> a;

	string binarny;

	while (a)
	{
		binarny = (a % 2 ? "1" : "0") + binarny;

		a /= 2;
	}
	cout << binarny;
	return 0;
}

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	int tablica[5] = { 1,2,3,4,5, };
	cout << "tablica = " << tablica << endl;
	cout << "&tablica = " << &tablica << endl << endl;
	cout << "&tablica[0] = " << &tablica[0] << endl;
	cout << "&tablica[1] = " << &tablica[1] << endl;
	cout << "&tablica[2] = " << &tablica[2] << endl;
	cout << "&tablica[3] = " << &tablica[3] << endl;
	cout << "&tablica[4] = " << &tablica[4] << endl;

	cout << "(int)&tablica[0] = " << (int)&tablica[0] << endl;
	cout << "(int)&tablica[1] = " << (int)&tablica[1] << endl;
	cout << "(int)&tablica[2] = " << (int)&tablica[2] << endl;
	cout << "(int)&tablica[3] = " << (int)&tablica[3] << endl;
	cout << "(int)&tablica[4] = " << (int)&tablica[4] << endl;


	int* wsk;
	wsk = &tablica[0];

		cout << endl << endl;
		cout << "Przesunięcie o 2 x 4bajty = " << (int)(wsk += 2) << endl;
		cout << "Przesunięcie kolejne o 2  = " << (int)(wsk += 2) << endl;
		cout << "Przesunięcie kolejne o 2 wyjdziemy poza adresy el. tablicy = " << (int)(wsk += 2) << endl;

		//to samo na stringu

		return 0;
	




}
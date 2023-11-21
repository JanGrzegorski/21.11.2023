#include <iostream>
using namespace std;
int main()
{
    int *wsk;
    int liczba = 2;
    cout << "Wskazniki" << endl;
    wsk = &liczba;
    cout << "WSK=" << (int)wsk << endl;
    cout << "*WSK=" << *wsk << endl;
    cout << "Liczba=" << liczba << endl;
    cout << "&Liczba=" << (int)&liczba << endl;
    cout << "&WSK=" << (int) &wsk << endl;
    return 0;

}

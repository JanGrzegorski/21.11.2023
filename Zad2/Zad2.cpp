#include <iostream>
using namespace std;
int main()
{
    string *wsk;
    string denis = "Bomba";
    cout << "Wskazniki" << endl;
    wsk = &denis;
    cout << "WSK=" << (int)wsk << endl;
    cout << "*WSK=" << *wsk << endl;
    cout << "Liczba=" << denis << endl;
    cout << "&Liczba=" << (int)&denis << endl;
    cout << "&WSK=" << (int) &wsk << endl;
    return 0;

}

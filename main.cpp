#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <stack>
#include <list>
#include <set>
#include <map>

using namespace std;

// Jedna uniwersalna funkcja
template <typename T>
void wypisz(const T& zmienna) {
    cout << zmienna << endl;
}

int main() {

    // Podstawowe typy
    int a = 10;
    short b = 5;
    long c = 1000;
    long long d = 100000;

    float e = 3.14f;
    double f = 3.14159;
    long double g = 3.141592L;

    char h = 'A';
    bool i = true;

    string j = "Hello World";

    // Tablica
    int tab[] = {1, 2, 3, 4, 5};

    // Wywo³ania
    wypisz(a);
    wypisz(b);
    wypisz(c);
    wypisz(d);

    wypisz(e);
    wypisz(f);
    wypisz(g);

    wypisz(h);
    wypisz(i);

    wypisz(j);

    return 0;
}

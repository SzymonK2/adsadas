📘 Podstawowe typy danych w C++
📌 Opis projektu

Projekt przedstawia podstawowe typy danych dostępne w języku C++ oraz sposób ich deklarowania i wyświetlania na ekranie.

Program wykorzystuje funkcję szablonową (template), która umożliwia wypisywanie zmiennych różnych typów bez konieczności tworzenia osobnych funkcji dla każdego z nich.

Jest to prosty projekt edukacyjny, przeznaczony dla osób rozpoczynających naukę programowania w C++.

🛠️ Wykorzystane technologie
Język: C++
Biblioteki standardowe: iostream, string
Szablony funkcji: template <typename T>
📚 Zakres projektu

Program prezentuje następujące typy danych:

1. Typy całkowite
int – liczby całkowite
short – krótkie liczby całkowite
long – długie liczby całkowite
long long – bardzo duże liczby całkowite
2. Typy zmiennoprzecinkowe
float – liczby zmiennoprzecinkowe pojedynczej precyzji
double – liczby zmiennoprzecinkowe podwójnej precyzji
long double – liczby zmiennoprzecinkowe rozszerzonej precyzji
3. Pozostałe typy
char – pojedynczy znak
bool – wartość logiczna (true lub false)
string – ciąg znaków
4. Tablice

W programie znajduje się również przykładowa tablica typu int:

cpp
int tab[] = {1, 2, 3, 4, 5};

⚙️ Funkcja szablonowa

Głównym elementem programu jest funkcja:

cpp
template <typename T>
void wypisz(const T& zmienna) {
    cout << zmienna << endl;
}


Funkcja wykorzystuje mechanizm szablonów C++, dzięki czemu może przyjmować argumenty różnych typów danych.

Zamiast tworzyć osobne funkcje dla int, float, double czy string, wystarczy jedna uniwersalna funkcja.

🚀 Kompilacja i uruchomienie

Do uruchomienia projektu potrzebny jest kompilator obsługujący język C++, np. G++.

Sklonuj repozytorium:
bash
git clone https://github.com/TWOJ-LOGIN/TWOJE-REPOZYTORIUM.git

Przejdź do katalogu projektu:
bash
cd TWOJE-REPOZYTORIUM

Skompiluj program:
bash
g++ main.cpp -o program

Uruchom program:

Windows:

bash
program.exe


Linux / macOS:

bash
./program

💻 Przykładowy wynik działania
text
10
5
1000
100000
3.14
3.14159
3.14159
A
1
Hello World

🎯 Cel projektu

Celem projektu jest praktyczne poznanie:

Podstawowych typów danych w C++.
Deklarowania i inicjalizowania zmiennych.
Różnic między typami całkowitymi i zmiennoprzecinkowymi.
Obsługi ciągów znaków.
Podstaw działania tablic.
Tworzenia i wykorzystywania funkcji szablonowych (template).
Wyświetlania danych za pomocą cout.
👨‍💻 Autor

Projekt edukacyjny wykonany w ramach nauki języka C++.

⭐ Jeśli repozytorium okazało się pomocne, zostaw gwiazdkę!

#include "LibTables.h"

// Funkcja tworz¹ca dynamiczn¹ tablicê o podanym rozmiarze
StosLista* f_utworzTablice(int rozmiarTablicy)
{
    StosLista* wsk = nullptr; // Inicjalizacja wskaŸnika na nullptr

    try {
        wsk = new StosLista[rozmiarTablicy] {}; // Próba utworzenia dynamicznej tablicy o rozmiarze rozmiarTablicy, inicjalizowana zerami
    }
    catch (bad_alloc) {
        cerr << "Blad przy utworzeniu"; // Komunikat o b³êdzie w przypadku niepowodzenia alokacji pamiêci
        exit(0); // Wyjœcie z programu
    }

    return wsk; // Zwrócenie wskaŸnika do nowo utworzonej tablicy
}

// Funkcja tworz¹ca dynamiczn¹ tablicê o podanym rozmiarze
list<int>* f_utworzTabliceList(int rozmiarTablicy)
{
    list<int>* wsk = nullptr; // Inicjalizacja wskaŸnika na nullptr

    try {
        wsk = new list<int>[rozmiarTablicy]{}; // Próba utworzenia dynamicznej tablicy o rozmiarze rozmiarTablicy, inicjalizowana zerami
    }
    catch (bad_alloc) {
        cerr << "Blad przy utworzeniu"; // Komunikat o b³êdzie w przypadku niepowodzenia alokacji pamiêci
        exit(0); // Wyjœcie z programu
    }

    return wsk; // Zwrócenie wskaŸnika do nowo utworzonej tablicy
}

void f_zwolnijTablice(int** wskTab, int wymiarN) {
    for (int i = 0; i < wymiarN; i++) {
        delete[] wskTab[i]; // Zwolnienie pamiêci dla ka¿dego wiersza
    }
    delete[] wskTab; // Zwolnienie pamiêci dla tablicy wskaŸników do wierszy
}

void f_wyswietlTablice(int** tab, int wymiarN, int wymiarM)
{
    for (int i = 0; i < wymiarN; i++) {
        for (int j = 0; j < wymiarM; j++) {
            cout << tab[i][j] << " ";  //wypisywanie elementów tablicy
        }
        cout << endl;
    }
}
#include "LibTables.h"

// Funkcja tworz�ca dynamiczn� tablic� o podanym rozmiarze
StosLista* f_utworzTablice(int rozmiarTablicy)
{
    StosLista* wsk = nullptr; // Inicjalizacja wska�nika na nullptr

    try {
        wsk = new StosLista[rozmiarTablicy] {}; // Pr�ba utworzenia dynamicznej tablicy o rozmiarze rozmiarTablicy, inicjalizowana zerami
    }
    catch (bad_alloc) {
        cerr << "Blad przy utworzeniu"; // Komunikat o b��dzie w przypadku niepowodzenia alokacji pami�ci
        exit(0); // Wyj�cie z programu
    }

    return wsk; // Zwr�cenie wska�nika do nowo utworzonej tablicy
}

// Funkcja tworz�ca dynamiczn� tablic� o podanym rozmiarze
list<int>* f_utworzTabliceList(int rozmiarTablicy)
{
    list<int>* wsk = nullptr; // Inicjalizacja wska�nika na nullptr

    try {
        wsk = new list<int>[rozmiarTablicy]{}; // Pr�ba utworzenia dynamicznej tablicy o rozmiarze rozmiarTablicy, inicjalizowana zerami
    }
    catch (bad_alloc) {
        cerr << "Blad przy utworzeniu"; // Komunikat o b��dzie w przypadku niepowodzenia alokacji pami�ci
        exit(0); // Wyj�cie z programu
    }

    return wsk; // Zwr�cenie wska�nika do nowo utworzonej tablicy
}

void f_zwolnijTablice(int** wskTab, int wymiarN) {
    for (int i = 0; i < wymiarN; i++) {
        delete[] wskTab[i]; // Zwolnienie pami�ci dla ka�dego wiersza
    }
    delete[] wskTab; // Zwolnienie pami�ci dla tablicy wska�nik�w do wierszy
}

void f_wyswietlTablice(int** tab, int wymiarN, int wymiarM)
{
    for (int i = 0; i < wymiarN; i++) {
        for (int j = 0; j < wymiarM; j++) {
            cout << tab[i][j] << " ";  //wypisywanie element�w tablicy
        }
        cout << endl;
    }
}
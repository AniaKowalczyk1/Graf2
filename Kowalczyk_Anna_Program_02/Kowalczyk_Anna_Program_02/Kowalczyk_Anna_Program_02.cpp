#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include "libFiles.h"     // Plik nagłówkowy dla funkcji operujących na plikach
#include "libTables.h"    // Plik nagłówkowy dla funkcji operujących na tablicach
#include "libFunctions.h" // Plik nagłówkowy dla innych funkcji pomocniczych
#include "libStos.h"      // Plik nagłówkowy dla struktury StosLista
using namespace std;


int main() {
    cout << "Za pomoca tablicy list" << endl;

    ifstream odczyt;
    string nazwaPliku = "dane";
    f_odczytZpliku(odczyt, nazwaPliku); // Funkcja z pliku libFiles.h, wczytuje dane z pliku
    int maxNrWierz = f_maxNrWierzcholka(odczyt); // Oblicza maksymalny numer wierzchołka
    odczyt.close();

    // Tworzenie macierzy kierunkowej za pomocą tablicy list
    ifstream odczyt1;
    f_odczytZpliku(odczyt1, nazwaPliku);
    StosLista* tab = f_utworzTablice(maxNrWierz); // Tworzy tablicę list 
    int iloscKrawedzi;
    odczyt1 >> iloscKrawedzi;
    f_utworzMacierzKierunkowo(odczyt1, tab, iloscKrawedzi);
    odczyt1.close();

    // Wypisanie list sąsiedztwa dla tablicy list
    f_wypiszListe(tab, maxNrWierz);
    cout << endl;

    // Wypisanie stopni wierzchołków dla tablicy list
    f_stopnieKierunkowo(tab, maxNrWierz);
    cout << endl;

    delete[] tab; // Zwolnienie pamięci

    /////////////////////

    cout << "Za pomoca kontenera list" << endl;

    // Tworzenie macierzy listowej za pomocą kontenera list
    ifstream odczyt2;
    f_odczytZpliku(odczyt2, nazwaPliku);
    list<int>* tabLista = f_utworzTabliceList(maxNrWierz); // Tworzy tablicę list
    odczyt2 >> iloscKrawedzi;
    f_utworzMacierzListowo(odczyt2, tabLista, iloscKrawedzi);
    odczyt2.close();

    // Wypisanie list sąsiedztwa 
    f_wypiszListeListowa(tabLista, maxNrWierz);
    cout << endl;

    // Wypisanie stopni wierzchołków 
    f_stopnieListowo(tabLista, maxNrWierz);

    delete[] tabLista; // Zwolnienie pamięci

    return 0;
}

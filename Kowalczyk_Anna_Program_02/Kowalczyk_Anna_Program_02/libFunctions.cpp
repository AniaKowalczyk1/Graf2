#include "libFunctions.h"


// Funkcja znajduj�ca maksymalny numer wierzcho�ka w grafie
int f_maxNrWierzcholka(ifstream& odczyt) {
    int iloscKrawedzi;
    int max = 0;
    int sprawdzana;
    odczyt >> iloscKrawedzi;
    for (int i = 0; i < iloscKrawedzi; i++) {
        odczyt >> sprawdzana;
        if (sprawdzana > max) {
            max = sprawdzana;
        }
        odczyt >> sprawdzana; // Pomijamy drugi wierzcho�ek
    }
    return max;
}

// Funkcja tworz�ca macierz kierunkow� na podstawie wczytanego pliku
void f_utworzMacierzKierunkowo(ifstream& odczyt, StosLista* tab, int iloscKrawedzi) {
    int poczatek, koniec;
    for (int i = 0; i < iloscKrawedzi; i++) {
        odczyt >> poczatek >> koniec;
        tab[poczatek - 1].f_dodaj(koniec); //indeksujemy od 0, wi�c przesuwamy o 1
        tab[koniec - 1].f_dodaj(poczatek);
    }
}

// Funkcja wypisuj�ca listy s�siedztwa dla macierzy kierunkowej
void f_wypiszListe(StosLista* tab, int maxNrWierz) {
    for (int i = 0; i < maxNrWierz; ++i) {
        cout << i + 1 << ": ";
        tab[i].f_wypisz();
    }
}

// Funkcja wypisuj�ca stopnie wierzcho�k�w dla macierzy kierunkowej
void f_stopnieKierunkowo(StosLista* tab, int maxNrWierz) {
    for (int i = 0; i < maxNrWierz; i++) {
        cout << i + 1 << ": " << tab[i].f_rozmiar() << endl;
    }
}

// Funkcja tworz�ca macierz listow� na podstawie wczytanego pliku
void f_utworzMacierzListowo(ifstream& odczyt, list<int>* tab, int iloscKrawedzi) {
    int poczatek, koniec;
    for (int i = 0; i < iloscKrawedzi; i++) {
        odczyt >> poczatek >> koniec;
        tab[poczatek - 1].push_back(koniec);
        tab[koniec - 1].push_back(poczatek);
    }
}

// Funkcja wypisuj�ca listy s�siedztwa dla macierzy listowej
void f_wypiszListeListowa(list<int>* tab, int maxNrWierz) {
    for (int i = 0; i < maxNrWierz; ++i) {
        cout << i + 1 << ": ";
        for (int v : tab[i]) {
            cout << v << " ";
        }
        cout << endl;
    }
}

// Funkcja wypisuj�ca stopnie wierzcho�k�w dla macierzy listowej
void f_stopnieListowo(list<int>* tab, int maxNrWierz) {
    for (int i = 0; i < maxNrWierz; i++) {
        cout << i + 1 << ": " << tab[i].size() << endl;
    }
}
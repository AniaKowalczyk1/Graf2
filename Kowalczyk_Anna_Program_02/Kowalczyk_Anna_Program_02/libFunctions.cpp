#include "libFunctions.h"


// Funkcja znajduj¹ca maksymalny numer wierzcho³ka w grafie
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
        odczyt >> sprawdzana; // Pomijamy drugi wierzcho³ek
    }
    return max;
}

// Funkcja tworz¹ca macierz kierunkow¹ na podstawie wczytanego pliku
void f_utworzMacierzKierunkowo(ifstream& odczyt, StosLista* tab, int iloscKrawedzi) {
    int poczatek, koniec;
    for (int i = 0; i < iloscKrawedzi; i++) {
        odczyt >> poczatek >> koniec;
        tab[poczatek - 1].f_dodaj(koniec); //indeksujemy od 0, wiêc przesuwamy o 1
        tab[koniec - 1].f_dodaj(poczatek);
    }
}

// Funkcja wypisuj¹ca listy s¹siedztwa dla macierzy kierunkowej
void f_wypiszListe(StosLista* tab, int maxNrWierz) {
    for (int i = 0; i < maxNrWierz; ++i) {
        cout << i + 1 << ": ";
        tab[i].f_wypisz();
    }
}

// Funkcja wypisuj¹ca stopnie wierzcho³ków dla macierzy kierunkowej
void f_stopnieKierunkowo(StosLista* tab, int maxNrWierz) {
    for (int i = 0; i < maxNrWierz; i++) {
        cout << i + 1 << ": " << tab[i].f_rozmiar() << endl;
    }
}

// Funkcja tworz¹ca macierz listow¹ na podstawie wczytanego pliku
void f_utworzMacierzListowo(ifstream& odczyt, list<int>* tab, int iloscKrawedzi) {
    int poczatek, koniec;
    for (int i = 0; i < iloscKrawedzi; i++) {
        odczyt >> poczatek >> koniec;
        tab[poczatek - 1].push_back(koniec);
        tab[koniec - 1].push_back(poczatek);
    }
}

// Funkcja wypisuj¹ca listy s¹siedztwa dla macierzy listowej
void f_wypiszListeListowa(list<int>* tab, int maxNrWierz) {
    for (int i = 0; i < maxNrWierz; ++i) {
        cout << i + 1 << ": ";
        for (int v : tab[i]) {
            cout << v << " ";
        }
        cout << endl;
    }
}

// Funkcja wypisuj¹ca stopnie wierzcho³ków dla macierzy listowej
void f_stopnieListowo(list<int>* tab, int maxNrWierz) {
    for (int i = 0; i < maxNrWierz; i++) {
        cout << i + 1 << ": " << tab[i].size() << endl;
    }
}
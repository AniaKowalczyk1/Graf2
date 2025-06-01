#include "libStos.h"


// Konstruktor
StosLista::StosLista() : wierzcholek(nullptr) {}

// Metoda sprawdzaj¹ca czy stos jest pusty
bool StosLista::f_czyPusty() {
    return wierzcholek == nullptr; // Zwraca true, jeœli wierzcho³ek jest pusty (nullptr), w przeciwnym razie false.
}

// Metoda zwracaj¹ca iloœæ elementów na stosie
int StosLista::f_rozmiar() {
    int liczba = 0;
    Wezel* biezacy = wierzcholek;
    while (biezacy != nullptr) {
        liczba++; // Zwiêksza licznik elementów na stosie.
        biezacy = biezacy->nastepny; // Przechodzi do nastêpnego elementu na stosie.
    }
    return liczba; // Zwraca liczbê elementów na stosie.
}

// Metoda zwracaj¹ca wartoœæ szczytowego elementu na stosie
int StosLista::f_szczytowy() {
    if (f_czyPusty()) {
        std::cout << "Stos jest pusty!" << std::endl; // Wyœwietla komunikat o pustym stosie, jeœli stos jest pusty.
        return 0;
    }
    return wierzcholek->wartosc; // Zwraca wartoœæ elementu na szczycie stosu.
}

// Metoda umieszczaj¹ca nowy element na szczycie stosu
void StosLista::f_dodaj(int wartosc) {
    wierzcholek = new Wezel(wartosc, wierzcholek); // Tworzy nowy wêze³ z podan¹ wartoœci¹ i wskaŸnikiem na poprzedni wierzcho³ek, i ustawia go jako nowy wierzcho³ek.
}

// Metoda zdejmuj¹ca istniej¹cy element ze szczytu stosu
void StosLista::f_usun() {
    if (f_czyPusty()) {
        std::cout << "Nie mo¿na zdj¹æ elementu z pustego stosu!" << std::endl; // Wyœwietla komunikat, jeœli próbujemy usun¹æ element z pustego stosu.
        return;
    }
    Wezel* temp = wierzcholek; // Tworzy tymczasowy wskaŸnik do bie¿¹cego wierzcho³ka.
    wierzcholek = wierzcholek->nastepny; // Przesuwa wskaŸnik wierzcho³ka do nastêpnego elementu na stosie.
    delete temp; // Usuwa poprzedni wierzcho³ek.
}

//metoda wypisuj¹ca elementy stosu
void StosLista::f_wypisz() {
    Wezel* temp = wierzcholek;
    while (temp != nullptr) {
        std::cout << temp->wartosc << " ";
        temp = temp->nastepny;
    }
    std::cout << std::endl;
}


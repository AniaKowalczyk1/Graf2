#include "libStos.h"


// Konstruktor
StosLista::StosLista() : wierzcholek(nullptr) {}

// Metoda sprawdzaj�ca czy stos jest pusty
bool StosLista::f_czyPusty() {
    return wierzcholek == nullptr; // Zwraca true, je�li wierzcho�ek jest pusty (nullptr), w przeciwnym razie false.
}

// Metoda zwracaj�ca ilo�� element�w na stosie
int StosLista::f_rozmiar() {
    int liczba = 0;
    Wezel* biezacy = wierzcholek;
    while (biezacy != nullptr) {
        liczba++; // Zwi�ksza licznik element�w na stosie.
        biezacy = biezacy->nastepny; // Przechodzi do nast�pnego elementu na stosie.
    }
    return liczba; // Zwraca liczb� element�w na stosie.
}

// Metoda zwracaj�ca warto�� szczytowego elementu na stosie
int StosLista::f_szczytowy() {
    if (f_czyPusty()) {
        std::cout << "Stos jest pusty!" << std::endl; // Wy�wietla komunikat o pustym stosie, je�li stos jest pusty.
        return 0;
    }
    return wierzcholek->wartosc; // Zwraca warto�� elementu na szczycie stosu.
}

// Metoda umieszczaj�ca nowy element na szczycie stosu
void StosLista::f_dodaj(int wartosc) {
    wierzcholek = new Wezel(wartosc, wierzcholek); // Tworzy nowy w�ze� z podan� warto�ci� i wska�nikiem na poprzedni wierzcho�ek, i ustawia go jako nowy wierzcho�ek.
}

// Metoda zdejmuj�ca istniej�cy element ze szczytu stosu
void StosLista::f_usun() {
    if (f_czyPusty()) {
        std::cout << "Nie mo�na zdj�� elementu z pustego stosu!" << std::endl; // Wy�wietla komunikat, je�li pr�bujemy usun�� element z pustego stosu.
        return;
    }
    Wezel* temp = wierzcholek; // Tworzy tymczasowy wska�nik do bie��cego wierzcho�ka.
    wierzcholek = wierzcholek->nastepny; // Przesuwa wska�nik wierzcho�ka do nast�pnego elementu na stosie.
    delete temp; // Usuwa poprzedni wierzcho�ek.
}

//metoda wypisuj�ca elementy stosu
void StosLista::f_wypisz() {
    Wezel* temp = wierzcholek;
    while (temp != nullptr) {
        std::cout << temp->wartosc << " ";
        temp = temp->nastepny;
    }
    std::cout << std::endl;
}


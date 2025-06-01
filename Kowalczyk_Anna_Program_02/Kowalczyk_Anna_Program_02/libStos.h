#pragma once

#include <iostream>

struct StosLista {
    // Wewn�trna struktura reprezentuj�ca element stosu
    struct Wezel {
        float wartosc; // Warto�� elementu
        Wezel* nastepny;  // Wska�nik na nast�pny element

        // Konstruktor
        Wezel(float wart, Wezel* nast) : wartosc(wart), nastepny(nast) {}
    };

    Wezel* wierzcholek; // Wska�nik na wierzcho�ek stosu

    // Konstruktor
    StosLista();

    /*
    Metoda sprawdzaj�ca czy stos jest pusty
    @return true, je�eli stos jest pusty
    */
    bool f_czyPusty();

    /*
     Metoda zwracaj�ca ilo�� element�w na stosie
    @return liczba element�w na stosie
    */
    int f_rozmiar();

    /*
    Metoda zwracaj�ca warto�� szczytowego elementu na stosie
    @return warto�� szczytowego elementu na stosie
    */
    int f_szczytowy();

    /*
    Metoda umieszczaj�ca nowy element na szczycie stosu
    @param liczba - warto�� nowego elementu
    */
    void f_dodaj(int wartosc);

    /*
    Metoda zdejmuj�ca istniej�cy element ze szczytu stosu
    */
    void f_usun();

    
    /*
    Metoda wypisuj�ca elementy stosu
    */
    void f_wypisz();


};
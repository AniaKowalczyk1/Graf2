#pragma once

#include <iostream>

struct StosLista {
    // Wewnêtrna struktura reprezentuj¹ca element stosu
    struct Wezel {
        float wartosc; // Wartoœæ elementu
        Wezel* nastepny;  // WskaŸnik na nastêpny element

        // Konstruktor
        Wezel(float wart, Wezel* nast) : wartosc(wart), nastepny(nast) {}
    };

    Wezel* wierzcholek; // WskaŸnik na wierzcho³ek stosu

    // Konstruktor
    StosLista();

    /*
    Metoda sprawdzaj¹ca czy stos jest pusty
    @return true, je¿eli stos jest pusty
    */
    bool f_czyPusty();

    /*
     Metoda zwracaj¹ca iloœæ elementów na stosie
    @return liczba elementów na stosie
    */
    int f_rozmiar();

    /*
    Metoda zwracaj¹ca wartoœæ szczytowego elementu na stosie
    @return wartoœæ szczytowego elementu na stosie
    */
    int f_szczytowy();

    /*
    Metoda umieszczaj¹ca nowy element na szczycie stosu
    @param liczba - wartoœæ nowego elementu
    */
    void f_dodaj(int wartosc);

    /*
    Metoda zdejmuj¹ca istniej¹cy element ze szczytu stosu
    */
    void f_usun();

    
    /*
    Metoda wypisuj¹ca elementy stosu
    */
    void f_wypisz();


};
#ifndef LIBTABLES_H
#define LIBTABLES_H
#include <iostream>
#include <list>
#include "libStos.h"  
using namespace std;

/*
Funkcja tworz¹ca tablicê
@param rozmiarTablicy - zmienna przechowuj¹ca liczbê wierszy
@return wskaŸnik do utoworzonej tablicy
*/
StosLista* f_utworzTablice(int rozmiarTablicy);

/*
Funkcja tworz¹ca tablicê
@param rozmiarTablicy - zmienna przechowuj¹ca liczbê wierszy
@return wskaŸnik do utoworzonej tablicy
*/
list<int>* f_utworzTabliceList(int rozmiarTablicy);

/*
Funkcja zwalniaj¹ca pamiêæ i usuwaj¹ca tablicê
@param wskTab - wskaŸnik do tablicy dwuwymiarowej
@param wymiarN - zmienna przechowuj¹ca liczbê wierszy
*/
void f_zwolnijTablice(int** wskTab, int wymiarN);

/*
Funkcja wyœwietlaj¹ca dwuwymiarow¹ tablicê
@param tab - wskaŸnik do tablicy dwuwymiarowej
@param wymiarN - zmienna przechowuj¹ca liczbê wierszy
@param wymiarM- zmienna przechowuj¹ca liczbê kolumn
*/
void f_wyswietlTablice(int** tab, int wymiarN, int wymiarM);

#endif


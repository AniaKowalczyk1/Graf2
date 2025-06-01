#ifndef LIBTABLES_H
#define LIBTABLES_H
#include <iostream>
#include <list>
#include "libStos.h"  
using namespace std;

/*
Funkcja tworz�ca tablic�
@param rozmiarTablicy - zmienna przechowuj�ca liczb� wierszy
@return wska�nik do utoworzonej tablicy
*/
StosLista* f_utworzTablice(int rozmiarTablicy);

/*
Funkcja tworz�ca tablic�
@param rozmiarTablicy - zmienna przechowuj�ca liczb� wierszy
@return wska�nik do utoworzonej tablicy
*/
list<int>* f_utworzTabliceList(int rozmiarTablicy);

/*
Funkcja zwalniaj�ca pami�� i usuwaj�ca tablic�
@param wskTab - wska�nik do tablicy dwuwymiarowej
@param wymiarN - zmienna przechowuj�ca liczb� wierszy
*/
void f_zwolnijTablice(int** wskTab, int wymiarN);

/*
Funkcja wy�wietlaj�ca dwuwymiarow� tablic�
@param tab - wska�nik do tablicy dwuwymiarowej
@param wymiarN - zmienna przechowuj�ca liczb� wierszy
@param wymiarM- zmienna przechowuj�ca liczb� kolumn
*/
void f_wyswietlTablice(int** tab, int wymiarN, int wymiarM);

#endif


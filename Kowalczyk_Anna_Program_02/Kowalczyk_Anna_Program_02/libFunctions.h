#ifndef LIBFUNCTIONS_H
#define LIBFUNCTIONS_H
#include <iostream>
#include <fstream>
#include <list>
#include "libStos.h" 
using namespace std;


/*
Funkcja znajduj�ca maksymalny numer wierzcho�ka w grafie@param podana - sprawdzana liczba
@param odczyt -  jest referencj� do obiektu strumienia wej�ciowego
@return warto�� najwi�kszego wierzcho�ka
*/
int f_maxNrWierzcholka(ifstream& odczyt);


/*
Funkcja tworz�ca macierz kierunkow� na podstawie wczytanego pliku
@param odczyt -  jest referencj� do obiektu strumienia wej�ciowego
@param tab -  tablica list
@param iloscKrawedzi -  liczba krawedzi 
*/
void f_utworzMacierzKierunkowo(ifstream& odczyt, StosLista* tab, int iloscKrawedzi);


/*
Funkcja wypisuj�ca listy s�siedztwa dla macierzy kierunkowej
@param tab -  tablica list
@param maxNrWierz -  warto�� najwi�kszego wierzcho�ka
*/
void f_wypiszListe(StosLista* tab, int maxNrWierz);

/*
Funkcja wypisuj�ca stopnie wierzcho�k�w dla macierzy kierunkowej 
@param tab -  tablica list
@param maxNrWierz -  warto�� najwi�kszego wierzcho�ka
*/
void f_stopnieKierunkowo(StosLista* tab, int maxNrWierz);


/*
Funkcja tworz�ca macierz listow� na podstawie wczytanego pliku
@param odczyt -  jest referencj� do obiektu strumienia wej�ciowego
@param tab -  tablica list
@param iloscKrawedzi -  liczba krawedzi
*/
void f_utworzMacierzListowo(ifstream& odczyt, list<int>* tab, int iloscKrawedzi);

/*
Funkcja wypisuj�ca listy s�siedztwa dla macierzy listowej
@param tab -  tablica list
@param maxNrWierz -  warto�� najwi�kszego wierzcho�ka
*/
void f_wypiszListeListowa(list<int>* tab, int maxNrWierz);

/*
Funkcja wypisuj�ca stopnie wierzcho�k�w dla macierzy listowej
@param tab -  tablica list
@param maxNrWierz -  warto�� najwi�kszego wierzcho�ka
*/
void f_stopnieListowo(list<int>* tab, int maxNrWierz);

#endif



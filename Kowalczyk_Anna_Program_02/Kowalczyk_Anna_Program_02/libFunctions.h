#ifndef LIBFUNCTIONS_H
#define LIBFUNCTIONS_H
#include <iostream>
#include <fstream>
#include <list>
#include "libStos.h" 
using namespace std;


/*
Funkcja znajduj¹ca maksymalny numer wierzcho³ka w grafie@param podana - sprawdzana liczba
@param odczyt -  jest referencj¹ do obiektu strumienia wejœciowego
@return wartoœæ najwiêkszego wierzcho³ka
*/
int f_maxNrWierzcholka(ifstream& odczyt);


/*
Funkcja tworz¹ca macierz kierunkow¹ na podstawie wczytanego pliku
@param odczyt -  jest referencj¹ do obiektu strumienia wejœciowego
@param tab -  tablica list
@param iloscKrawedzi -  liczba krawedzi 
*/
void f_utworzMacierzKierunkowo(ifstream& odczyt, StosLista* tab, int iloscKrawedzi);


/*
Funkcja wypisuj¹ca listy s¹siedztwa dla macierzy kierunkowej
@param tab -  tablica list
@param maxNrWierz -  wartoœæ najwiêkszego wierzcho³ka
*/
void f_wypiszListe(StosLista* tab, int maxNrWierz);

/*
Funkcja wypisuj¹ca stopnie wierzcho³ków dla macierzy kierunkowej 
@param tab -  tablica list
@param maxNrWierz -  wartoœæ najwiêkszego wierzcho³ka
*/
void f_stopnieKierunkowo(StosLista* tab, int maxNrWierz);


/*
Funkcja tworz¹ca macierz listow¹ na podstawie wczytanego pliku
@param odczyt -  jest referencj¹ do obiektu strumienia wejœciowego
@param tab -  tablica list
@param iloscKrawedzi -  liczba krawedzi
*/
void f_utworzMacierzListowo(ifstream& odczyt, list<int>* tab, int iloscKrawedzi);

/*
Funkcja wypisuj¹ca listy s¹siedztwa dla macierzy listowej
@param tab -  tablica list
@param maxNrWierz -  wartoœæ najwiêkszego wierzcho³ka
*/
void f_wypiszListeListowa(list<int>* tab, int maxNrWierz);

/*
Funkcja wypisuj¹ca stopnie wierzcho³ków dla macierzy listowej
@param tab -  tablica list
@param maxNrWierz -  wartoœæ najwiêkszego wierzcho³ka
*/
void f_stopnieListowo(list<int>* tab, int maxNrWierz);

#endif



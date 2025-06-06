#ifndef LIBFILES_H
#define LIBFILES_H
#include <iostream>
#include <fstream>
using namespace std;


/*
Funkcja otwierająca zapis do pliku
@param zapis - referencja do obiektu strumienia wyjściowego pliku
@param nazwaPliku - referencja do nazwy pliku
*/
void f_zapisDoPliku(ofstream& zapis, string& nazwaPliku);

/*
Funkcja otwierająca zapis do pliku
@param odczyt - referencja do obiektu strumienia wejściowego pliku
@param nazwaPliku - referencja do nazwy pliku
*/
void f_odczytZpliku(ifstream& odczyt, string& nazwaPliku);

#endif



# Reprezentacja grafu za pomocą list sąsiedztwa

## Opis projektu

Projekt demonstruje dwie metody reprezentacji grafu nieskierowanego za pomocą list sąsiedztwa:

1. **Własna implementacja listy** — tablica obiektów typu `StosLista`.
2. **Standardowy kontener STL** — tablica kontenerów `std::list<int>`.

Dane grafu są wczytywane z pliku tekstowego o nazwie `dane`, który zawiera liczbę krawędzi oraz pary wierzchołków reprezentujących krawędzie.

Program:

- Odczytuje dane z pliku,
- Tworzy listę sąsiedztwa grafu (reprezentację grafu),
- Wypisuje listy sąsiedztwa (sąsiadów dla każdego wierzchołka),
- Wypisuje stopień (liczbę krawędzi) każdego wierzchołka.


#include <iostream>
#include <vector>
#include <cmath>
#include <ctime> // Generar un número aleatorio diferente cada vez que se ejecute el programa.
#include <cstdlib> // Generar un número aleatorio.
#include "funciones.h"
using namespace std;

int main () {
  int longitud_vector;
  double rango_minimo, rango_maximo; //Rango en el que se generarán los números aleatorios.
  vector<double> mi_vector;
  cout << "Introduzca tres valores: la longitud del vector (un número entero) y el rango en el que se generarán los números aleatorios (dos números reales). " << endl;
  cin >> longitud_vector >> rango_minimo >> rango_maximo;
  mi_vector.resize(longitud_vector);
  srand48((unsigned)time(NULL)); //Esto sirve para que no se generen los mismos números cada vez que se ejecute el programa.
  cout << "Los números generados son: ";
  for (int i = 0; i < mi_vector.size(); i++) {
    mi_vector[i] = drand48() * (rango_maximo - rango_minimo) + rango_minimo;
    cout << mi_vector[i] << "  ";}
  cout << endl << MediaYDesviacion(mi_vector) << endl;
  cout << Maximo(mi_vector) << endl << Minimo(mi_vector) << endl;
}

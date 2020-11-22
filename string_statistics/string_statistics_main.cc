#include <iostream>
#include <vector>
#include <string>
#include "funciones.h"
using namespace std;

int main () {
  vector<string> palabras(10);
  palabras = {"plátano", "balón", "cisne", "abracadabra", "tortuga", "diamante", "chocolate", "gato", "jarrón", "dos"};
  cout << Longitud(palabras) << endl;
  cout << PrimeraLetra(palabras) << endl;
  cout << UltimaLetra(palabras) << endl;
  cout << Abracadabra(palabras) << endl;
  }

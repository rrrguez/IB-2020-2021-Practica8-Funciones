#include <iostream>
#include <vector>
#include <cmath>
#include "funciones.h"
using namespace std;

double MediaYDesviacion(vector<double> vector) {
  double suma, media, desviacion_individual, desviacion_estandar;
  for (int i = 0; i < vector.size(); i++) {
    suma += vector[i];
    media = suma / double(vector.size());}
  cout << "La media de los valores es: " << media << endl;
  for (int j = 0; j < vector.size(); j++) {
    desviacion_individual += pow(vector[j] - media, 2);
    desviacion_estandar = sqrt(desviacion_individual/vector.size());}
  cout << "La desviación estándar de los valores es: "; return desviacion_estandar;}

double Maximo(vector<double> vector) {
  double valor_maximo;
  for (int i = 0; i < vector.size(); i++) {
    switch (vector[i] > valor_maximo) {
      case 0: break;
      case 1: valor_maximo = vector[i]; break;}}
  cout << "El valor máximo es: "; return valor_maximo;}

double Minimo(vector<double> vector) {
  double valor_minimo=999999999999999999;
  for (int i = 0; i < vector.size(); i++) {
    switch (vector[i] < valor_minimo) {
      case 0: break;
      case 1: valor_minimo = vector[i]; break;}}
  cout << "El valor mínimo es: "; return valor_minimo;}

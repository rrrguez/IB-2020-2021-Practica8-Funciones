#include<iostream>
#include"funciones.h"
using namespace std;

int main () {
  int numero;
  cout << "Introduzca un número entero: ";
  cin >> numero;
  cout << "La diferencia entre el cuadrado de la suma de los " << numero << " primeros números enteros y la suma de los " << numero << " primeros números al cuadrado es: ";
  cout << CuadradoDeLaSuma(numero) - SumaDeLosNumerosAlCUadrado(numero) << endl;}

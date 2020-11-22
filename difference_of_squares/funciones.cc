#include<iostream>
#include<cmath>
#include"funciones.h"
using namespace std;

int CuadradoDeLaSuma(int numero) {
  int suma = 0;
  for (int i = 1; i <= numero; i++) {
    suma += i;}
  return pow(suma,2);}
  
int SumaDeLosNumerosAlCUadrado(int numero) {
  int suma = 0;
  for (int i = 1; i <= numero; i++) {
    suma += pow(i,2);}
  return suma;}

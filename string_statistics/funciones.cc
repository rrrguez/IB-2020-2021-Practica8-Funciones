#include <iostream>
#include <vector>
#include <string>
#include "funciones.h"
using namespace std;

string Longitud(vector<string> vector) {
  cout << "Longitud de la palabra: " << endl;
  for (int i = 0; i < vector.size(); i++) {
    cout << "  " << vector[i] << ": " << vector[i].length() << endl;}
    return "----------------------------------------------";}

string PrimeraLetra(vector<string> vector) {
  cout << "Primer caracter de la palabra: " << endl;
  for (int i = 0; i < vector.size(); i++) {
    cout << "  " << vector[i] << ": " << vector[i].front() << endl;}
    return "----------------------------------------------";}

string UltimaLetra(vector<string> vector) {
  cout << "Último caracter de la palabra: " << endl;
  for (int i = 0; i < vector.size(); i++) {
    cout << "  " << vector[i] << ": " << vector[i].back() << endl;}
    return "----------------------------------------------";}

string Abracadabra(vector<string> vector) {
  cout << "¿La palabra es 'abracadabra'?" << endl;
  string palabra_magica = "abracadabra";
  for (int i = 0; i < vector.size(); i++) {
    if (vector[i].find(palabra_magica) != string::npos) {
      cout << "  " << vector[i] << ": " << "Sí" << endl;
      } else {
      cout << "  " << vector[i] << ": " << "No" << endl;
    }}
  return " ";}

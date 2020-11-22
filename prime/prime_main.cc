#include <iostream>
#include <vector>
#include "CheckPrime.h"
using namespace std;
      
int main () {
  vector<int> prime_numbers{2};
  int number = 0, puesto;
  while (number < 100) {
    if (CheckPrime(number) == true) {
      prime_numbers.push_back(number);}
    number++;}
  cout << "Introduzca el puesto de los números primos que quiere conocer: ";
  cin >> puesto;
  cout << "El número primo que se encuentra en el puesto " << puesto << " es el " << prime_numbers[puesto] << endl;}

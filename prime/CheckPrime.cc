#include <iostream>
using namespace std;

bool CheckPrime(int number) {
  if (number == 0 || number == 1) { 
    return false;}
  if (number == 2) {
    return true;}
  for (int i = 2; i < number; i++) {
    if (number % i == 0) {
      return false;}}
  return true;
  return 0;}

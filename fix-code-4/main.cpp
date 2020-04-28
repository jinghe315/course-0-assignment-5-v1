#include <iostream>
#include <string>
using namespace std;

float GetTemperature1(float input) {
  return (input * 1.8) + 32;
}

float GetTemperature2(float input) {
  return input * 100;
}

int main() {
  cout << "the temperature in F should be: " << GetTemperature1(6.0);
}

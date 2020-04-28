#include <iostream>
#include <string>
using namespace std;

float GetTemperature() {
  cout << "Temperature in celcius: ";
  float celcius;
  cin >> celcius;
  return celcius;
}

int main() {
  int temp;
  temp = GetTemperature();
}

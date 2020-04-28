#include <iostream>
#include <string>
using namespace std;

int GetAge() {
  return 4;
}

float GetTemperature() {
  return 120.3;
}

int main() {
  cout << "The temperature is: " << GetTemperature() << endl;
  cout << "The age is: " << GetAge() << endl;
}

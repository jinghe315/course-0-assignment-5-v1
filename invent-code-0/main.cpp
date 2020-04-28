#include <iostream>
#include <string>
using namespace std;

int GetUserInput() {
  std::cout << "Enter a number: ";
  int input; 
  cin >> input; 
  return input; 
}

int Factorial(int number) {
  if (number <= 1)  {
    return 1;
  }
  return number*Factorial(number-1);
}

int main() {
  int number = GetUserInput();
  int factorial = Factorial(number);

  cout << "The factorial of " << number << " is " << factorial << endl;

  return 0;
}

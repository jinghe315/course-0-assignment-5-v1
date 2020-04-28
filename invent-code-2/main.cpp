#include <iostream>
#include <string>
using namespace std;

int GetInputNumber() {
  std::cout << "Enter number: ";
  int input; 
  cin >> input; 
  return input; 
} 
 char GetInputOperator() {
  std::cout << "Enter an operator: ";
  char operate = 0; 
  cin >> operate; 
  return operate;
 }

int Calculate (int num1) {
  int answer = 0;
  int num2 = 0;
  char sign = 0;
  sign = GetInputOperator();
  num2 = GetInputNumber();

  if (sign == '+') {
    answer = num1 + num2;
  }
  if (sign == '/') {
    answer = num1 / num2;
  }
  if (sign == '*') {
    answer = num1 * num2;
  }
  if (sign == '-') {
    answer = num1 - num2;
  }
  if (sign == '%') {
    answer = num1 % num2;
  }
  cout << "Running total is: ";
  cout << answer << endl;

  char choice = 0;
  cout << "Add more numbers? (Y/N) ";
  cin >> choice;

  if (choice == 'Y'){
    return Calculate(answer);
  }
  return answer;
}

int main() {
  int firstinput = 0;
  firstinput = GetInputNumber();
  Calculate(firstinput);

}
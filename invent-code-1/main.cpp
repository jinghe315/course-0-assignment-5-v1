#include <iostream>
#include <string>
using namespace std;

string IngredientName (){
  string ingredient;
  cout << "What ingredient are you adding? ";
  cin >> ingredient; 
  return ingredient; 
}

float CostOfIngredient(const string ingredient) {
  int ingredientcost;
  int num_ingredient; 
  int price_ingredient;
  cout << "How many ";
  cout << ingredient;
  cout << " are in the recipe? ";
  cin >> num_ingredient;
  if (num_ingredient > 0) { 
    cout << "What's the price for each ";
    cout << ingredient;
    cout << "? ";
    cin >> price_ingredient;
  }
  if (num_ingredient <= 0) {
    return 0;
  }
  ingredientcost = num_ingredient * price_ingredient;
  string anotheringredient;
  cout << "Do you have more ingredients (Y/N)? ";
  cin >> anotheringredient;

  if (anotheringredient == "Y"){
    string newingredient = IngredientName();
    return ingredientcost + CostOfIngredient(newingredient);
  }
  return ingredientcost;
}

int main() {
  string ingredient = IngredientName();
  float total_cost = 0;
  total_cost = CostOfIngredient(ingredient);


  cout << "The cost of adding this ingredient will be: $" << total_cost << endl;
}


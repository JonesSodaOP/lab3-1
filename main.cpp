#include <iostream>
using namespace std;

int main() {
  float weight; // float used due to decimal values in a person weight
  float pounds;
  float kilograms;
  
  cout << "Enter your weight in pounds: ";
  cin >> pounds;
  
  kilograms = pounds / 2.20462;
  cout << "Your weight in kilograms: " << kilograms << endl;
}
// end
#include <iostream>
using namespace std;

int main() {
  int number;
  cout << "Enter a number between 1000 and 2000 ";
  cin >> number;

  if (number < 1000 || number > 2000)
    cout << "The number inputted is not valid.\n";

  if (number >= 1250 && number <= 1750)
  {
    cout << "The number inputted is in the middle of the range." << endl;
    cout << "It is between 1250 and 1750.";
  }
}
#include <iostream>

using namespace std;

/** 
 * Create a function that prints a multiplication table with a given base number
 * It should take the base number as a parameter, and print the output to the cout
 *
 * The output should look like this for 5 as base:
 *   1 * 5 = 5
 *   2 * 5 = 10
 *   3 * 5 = 15
 *   4 * 5 = 20
 *   5 * 5 = 25
 *   6 * 5 = 30
 *   7 * 5 = 35
 *   8 * 5 = 40
 *   9 * 5 = 45
 *   10 * 5 = 50
 */

void multiplication(int num) {
  for (int row = 1; row <= 10; row++) {
    cout << row << " * " << num << " = " << row * num << endl;
  }
  cout << endl;
}

int main() {
  int input;
  cout << "Please give me a number and I will show you how to multiply it: ";
  cin >> input;
  cout << "Here you go: " << endl;
  multiplication(input);
  return 0;
}


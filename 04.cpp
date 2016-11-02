#include <iostream>

using namespace std;

/** 
 * Create a function that takes an integer and returns how many divisors it has
 */

void num_of_divisors(int num) {
  int divisor = 0;
  for (int i = 1; i <= num; i++) {
    if (num % i == 0) {
      divisor++;
    }
  }
  cout << divisor;
}

int main() {
  int input;
  cout << "Please give me an integer and I'll show you how many divisors it has: ";
  cin >> input;
  cout << "Number " << input << " has this many divisors: ";
  num_of_divisors(input);
  return 0;
}


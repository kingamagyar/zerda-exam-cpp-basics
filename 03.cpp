#include <iostream>

using namespace std;

/** 
 * Create a function that takes a pointer to a float and a float, then it should
 * multiply the value of the pointer with the given float and save the result
 * where the pointer points.
 * Please multiply the total variable by 5 with it.
 */

void multiply(float* num1, float num2) {
  *num1 *= num2;
}

int main() {
  float total = 123;
  float* pointer = &total;
  multiply(pointer, 5);
  cout << total << endl;
  return 0;
}


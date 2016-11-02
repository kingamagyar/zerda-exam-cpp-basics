#include <iostream>

using namespace std;

/** 
 * Create a function that decides if there is a bigger or equal number than a given number in an array
 * It should take the array, it's length and a number as a parameter, then return a boolean
 */
bool decide(int* array, int length, int num) {
  for (int i = 0; i < length; i++) {
    if (array[i] >= num) {
	  return true;
	} else {
	  return false;
	}
    return array;
  }
}

int main() {
  int array[] = {3, 2, 4, 6, -1};
  int input;
  cout << "Please give me a number: ";
  cin >> input;
  cout << "Is there a bigger or equal number to " << input << " in the array? (Y=1 / N=0) " << decide(array, 5, input) << endl;
  return 0;
}


#include <iostream>

using namespace std;

// recursive function to calculate factorial
int factorial(int n) {
  //factorial of 0 is 1
  if (n == 0) {
    return 1;
  }
  //calculate factorial of n-1 and multiply by n
  else {
    return n * factorial(n - 1);
  }
}

int main() {
  int n;
  // prompt user to enter a positive integer
  cout << "\033[0mEnter a positive integer;\nPress Ctrl+C to quit:\n";
  // read integer from user input
  cin >> n;
  // check if n is negative
  if (n < 0) {
    // print error message in red if n is negative
    cout << "\033[1;31mCANT FACTORIAL NEGATIVE NUMBERS!\n";
    // exit program with error code 1
    return 1;
  }
  // print n! in magenta if n is non-negative
  cout << "\033[1;35m" << n << "! = " << factorial(n) << endl;
  return 0;
}

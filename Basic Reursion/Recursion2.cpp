//Basic Recursion function using condition.

#include <iostream>
using namespace std;
int num = 0;

void myFunction() {
  if (num == 4) return;

  cout << num << endl;
  num++;

  myFunction();
}

int main() {
  myFunction(); // call the function
  return 0;
}

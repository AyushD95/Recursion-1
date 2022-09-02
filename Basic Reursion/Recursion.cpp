// Basic Recursion function .

#include <iostream>
using namespace std;
void myFunction() {
  cout << "I just";

  myFunction();
}

int main() {
  myFunction(); // call the function
  return 0;

}

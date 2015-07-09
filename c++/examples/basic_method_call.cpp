// this includes the iostream library. this allows for the user to use cin or cout to input or output basic data
// # means an include
#include <iostream>

// this uses the name space std for standard libray. this allows the user to use system functions.
using namespace std;

// main() is where program execution begins.

int main() {

  // will create a new variable named i. a the same time it will call addNumbers()
  int i = addNumbers(1,2);

  cout << i ;

  return 0;
}


// int means it must return an integer
// addNumbers is the method name
// (int a, int b) these are the parameters. int is the type a and b are the names of the variables in this method.
int addNumbers(int a, int b) {
  // will create a new int variable named c which is equal to a + b
  int c = a + b;

  // will return c; 
  // by return i mean it will give it back to where it was called.
  return c;
}

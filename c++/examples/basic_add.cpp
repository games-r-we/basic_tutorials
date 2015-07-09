// this includes the iostream library. this allows for the user to use cin or cout to input or output basic data
// # means an include
#include <iostream>

// this uses the name space std for standard libray. this allows the user to use system functions.
using namespace std;

// main() is where program execution begins.

int main() {

  // declaring an integer variable
  int a = 1;
  int b = 2;

  int c = a  + b;

	//cout output a line of text.  \n means new line.
  // this line will print output variable c to the console
   cout << c;
   cout << "\n";

   //because the main type is int  (int main() ) must return an integer.
   return 0;
}

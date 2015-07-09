// this includes the iostream library. this allows for the user to use cin or cout to input or output basic data
// # means an include
#include <iostream>

// this uses the name space std for standard libray. this allows the user to use system functions.
using namespace std;

// main() is where program execution begins.

int main() {
  //cout output a line of text.  \n means new line.

  // declaring an integer variable
  cout << "THIS IS A FORLOOP Example!\n";

  // i is a new variable known as an incrementer it starts at 0
  // this will continue to repeat until i >= 10
  // i++ will add 1 to itself each time through the loop
  for(int i = 0; i < 10; i++) { 
  // will output i
   cout << i;

   // will start a new line
   cout << "\n";
  }

   //because the main type is int  (int main() ) must return an integer.
   return 0;
}

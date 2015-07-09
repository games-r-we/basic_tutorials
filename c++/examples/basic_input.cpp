// this includes the iostream library. this allows for the user to use cin or cout to input or output basic data
// # means an include
#include <iostream>

// this uses the name space std for standard libray. this allows the user to use system functions.
using namespace std;

// main() is where program execution begins.

int main() {
  //cout output a line of text.  \n means new line.

  // declaring 2 integer variables
  int a,b;

  // outputs instructions to user
  cout << "This Program Will Add 2 Integers!\n";
  cout << "ENTER FIRST NUMBER To Add!\n";

  // allows the user to input the first number
  cin >> a;

  // outputs instructions
  cout << "ENTER SECOND NUMBER To Add!\n";
  
  // allows the user to input the second number
  cin >> b;

  // combines the first number and second number
  int c = a  + b;

  // will output the answer to the user
   cout << "Your Answer Is:\n";
   cout << c;

   // starts a new line
   count << "\n";
   
   //because the main type is int  (int main() ) must return an integer.
   return 0;
}

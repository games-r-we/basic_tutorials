// this includes the iostream library. this allows for the user to use cin or cout to input or output basic data
// # means an include
#include <iostream>

// this uses the name space std for standard libray. this allows the user to use system functions.
using namespace std;

// main() is where program execution begins.

int main(){
  //cout output a line of text.  \n means new line.

  // declaring two integer variables
  int a,b;

  // outputs instructions to user
  cout << "This Program Will Compare 2 Integers!\n";
  cout << "ENTER FIRST NUMBER TO COMPARE!\n";
  
  //allows user to input first number.
  cin >> a;

  // outputs instuctions to user
  cout << "ENTER SECOND NUMBER TO COMPARE!\n";

  // allows the user to input second number
  cin >> b;

  //comparison if statment. if comparing use == instead of =. other options include != not equal, <= less than or equal, greater than or equal >=
  if(a == b) {
    cout << "The Numbers Are Equal!";
    cout << "\n";
  }
  // else allows to compare a second time without repeating
  else if(a > b) {
    cout << a;
    cout << " Is Bigger Than ";
    cout << b;
    cout << "\n";
  }
  // if it isnt equal or bigger it must be less than
  else {
    cout << b;
    cout << " Is Bigger Than ";
    cout << a;
    cout << "\n";
  }
   //because the main type is int  (int main() ) must return an integer.
   return 0;
}

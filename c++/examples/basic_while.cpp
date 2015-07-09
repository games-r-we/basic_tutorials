// this includes the iostream library. this allows for the user to use cin or cout to input or output basic data
// # means an include
#include <iostream>

// this uses the name space std for standard libray. this allows the user to use system functions.
using namespace std;

// main() is where program execution begins.

int main() {
  //cout output a line of text.  \n means new line.
  int i;
  cout << "THIS IS A While Loop Example!\n";
  cout << "Input A Number!\n";

  //cin allows the user to input something
  cin >> i;

  // a while loop will keep running while the condition is true
  // so in this case while i < 10 it will keep repeating
  while(i < 10) {
    cout << "Sorry That Number Was Not Bigger Than 10!\n";
    cout << "Input A Number!\n";
    cin >> i;
    cout << "\n";
  }
  cout << "YEY " << i <<" IS BIGGER THAN 10!\n";
   //because the main type is int  (int main() ) must return an integer.
   return 0;
}

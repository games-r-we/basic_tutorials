// this includes the iostream library. this allows for the user to use cin or cout to input or output basic data
// # means an include
#include <iostream>

// this uses the name space std for standard libray. this allows the user to use system functions.
using namespace std;

// main() is where program execution begins.

int main() {
  //cout output a line of text.  \n means new line.

  // declaring an integer variable

  int my_array [] = { 16, 2, 77, 40, 12071,123,123,12312,123,121231,123,123,12312,4235,4356,45,223452,345,23452,345 };

  cout << "THIS IS A FORLOOP/Array Example!\n";
  int length = sizeof(my_array) / sizeof(my_array[0]);

  for(int i = 0; i < length; i++){
   cout << my_array[i];
   cout << "\n";
  }

   //because the main type is int  (int main() ) must return an integer.
   return 0;
}

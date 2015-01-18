#include <iostream>
using namespace std;

// main() is where program execution begins.

int main(){
  //cout output a line of text.  \n means new line.

  // declaring an integer variable
  int a,b;
  cout << "This Program Will Compare 2 Integers!\n";
  cout << "ENTER FIRST NUMBER TO COMPARE!\n";
  //input 1
  cin >> a;
  cout << "ENTER SECOND NUMBER TO COMPARE!\n";
  // input 2
  cin >> b;

  //comparison if statment. if comparing use == instead of =. other options include != not equal, <= less than or equal, greater than or equal >=
  if(a == b){
    cout << "The Numbers Are Equal!";
    cout << "\n";
  }
  else if(a > b){
    cout << a;
    cout << " Is Bigger Than ";
    cout << b;
    cout << "\n";
  }
  else{
    cout << b;
    cout << " Is Bigger Than ";
    cout << a;
    cout << "\n";
  }
   //because the main type is int  (int main() ) must return an integer.
   return 0;
}

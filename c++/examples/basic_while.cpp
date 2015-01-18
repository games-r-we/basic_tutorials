#include <iostream>
using namespace std;

// main() is where program execution begins.

int main(){
  //cout output a line of text.  \n means new line.
  int i;
  cout << "THIS IS A While Loop Example!\n";
  cout << "Input A Number!\n";
  cin >> i;

  while(i < 10){
    cout << "Sorry That Number Was Not Bigger Than 10!\n";
    cout << "Input A Number!\n";
    cin >> i;
    cout << "\n";
  }
  cout << "YEY " << i <<" IS BIGGER THAN 10!\n";
   //because the main type is int  (int main() ) must return an integer.
   return 0;
}

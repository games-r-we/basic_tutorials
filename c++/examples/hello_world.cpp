#include <iostream>
using namespace std;

int test(){
  int a = 0;
  int b  = 5;
  int c = a + b;
  return c;
}

boolean test2(){
  boolean a = true;
  boolean b = false;
  return a && b;
}

// main() is where program execution begins.
int main(){
	//cout output a line of text.  \n means new line.
   //cout << "Hello World \n";
   //because the main type is int  (int main() ) must return an integer.
   int get_test = test();
   cout << get_test << "\n";
   return 0;
}

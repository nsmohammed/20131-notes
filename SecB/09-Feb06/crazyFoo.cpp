#include <iostream>
using namespace std;

int& foo(){
  static int i = 0;
  return i;
}


int main(){
  cout<<foo()<<endl;
  foo() = 30;
  cout<<foo()<<endl;
  return 0;
}
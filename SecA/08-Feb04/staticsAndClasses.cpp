#include <iostream>
using namespace std;

struct Cont{
  static int S;
  int v;
  Cont(){
    v = 10;
  }
  static int foo(){
    // v = 24;   can not happen, since there are many V's out there; and only one Foo();
    S = 34;
  }
};
int Cont::S = 0;


int main(){
  return 0;
}
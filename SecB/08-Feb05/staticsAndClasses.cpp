#include <iostream>
using namespace std;

class Container{
  static int s;
  int v;
public:
  Container(int val){
    v = val;
  }
  void print(){
    cout<<v<<"   "<<s<<endl;
  }
  static void setS(int st){
    s = st;
    //v = st;  can't because v is not static
  }
};

int Container::s = 20;






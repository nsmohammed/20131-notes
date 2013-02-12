#include <iostream>
using namespace std;
class Cont{
  int _data;
public:
  Cont(int data):_data(data){  // initializing.....
//    _data = data;  setting
  }
  ostream& print(ostream& os)const{
    return os<<_data;
  }
};
ostream& operator<<(ostream& os,const Cont& C){
  return C.print(os);
}
class Der:public Cont{
  float _f;
public:
  Der(int data, float f):Cont(data),_f(f){
  }
};


int main(){
  Cont C = 10;
  cout<<C<<endl;
  return 0;
}
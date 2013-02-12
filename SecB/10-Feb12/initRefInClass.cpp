#include <iostream>
using namespace std;
class Ref{
  int& _data;
public:
//  Ref(int data):_data(data){  booboo fixed below
//  }
  Ref(int& data):_data(data){
  }
  ostream& print(ostream& os)const{
    return os<<_data;
  }
};
ostream& operator<<(ostream& os,const Ref& C){
  return C.print(os);
}


int main(){
  int i = 10;
  Ref R(i);
  cout<<R<<endl;
  i = 234;
  cout<<R<<endl;
  return 0;
}
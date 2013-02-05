#include <iostream>
#include <cstring>
using namespace std;

class Container{
  char data[81];
public:
  Container(const char* data){
    strncpy(this->data , data, 80);
    this->data[80] = 0;
  }
  const char* getData()const{
    return data;
  }
  void nullify(){
    data[0] = 0;
  }
};

ostream& operator<<(ostream& os,const Container& C){
  os<<C.getData()<<endl;
}







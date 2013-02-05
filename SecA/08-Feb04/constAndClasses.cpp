#include <iostream>
#include <cstring>
using namespace std;

class Container{
  char data[80];
public:
  Container(const char* data){
    strcpy(this->data, data);
  }
  const char* getData()const{
    return (const char*) data;
  }
};

ostream& operator<<(ostream& os,const Container& C){
  return os<<C.getData();
}


int main(){
  Container C("Hello");
  cout<<C<<endl;
  return 0;
}
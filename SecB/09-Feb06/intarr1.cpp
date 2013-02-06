#include <iostream>
using namespace std;

class IntArr{
  int* _data;
  unsigned int _size;
public:
  IntArr(unsigned int size){
    _data = new int[_size = size];
  }
  int getElem(unsigned int index)const{
    return _data[index%_size];
  }
  void setElem(unsigned int index, int val){
    _data[index%_size] = val;
  }
  unsigned int Size()const{
    return _size;
  }
  virtual ~IntArr(){
    if(_data){
      delete[] _data; // if it makes you happy
    }
  }
};


int main(){
  IntArr I(5);
  int i;
  for(i=0;i<7;i++){
    I.setElem(i,i*10);
  }
  for(i=0;i<I.Size();i++){
    cout<<I.getElem(i)<<" ";
  }
  cout<<endl;
  return 0;
}
#include <iostream>
using namespace std;

class IntArray{
  int* _data;
  unsigned int _size;
public:
  IntArray(unsigned int size){
    _data = new int[_size = size];
  }
  unsigned int Size()const{
    return _size;
  }
  int& operator[](unsigned int index){
    if(index >= _size){
      int newsize = _size<1024?_size*2:_size + 1024;
      int* temp = new int [ newsize ];
      for(int i=0;i<_size;i++){
        temp[i] = _data[i];
      }
      delete[] _data;
      _data = temp;
      _size = newsize;
    }
    return _data[index];
  }
  virtual ~IntArray(){
    delete[] _data;
  }
};

int main(){
  IntArray I(5);
  int i;
  for(i=0;i<6;i++){
    //I.operator[](i) = i* 10;  cause its ugly
    I[i] = i * 10;
  }
  for(i=0;i<I.Size();i++){
    cout<<I[i]<<", ";
  }
  cout<<endl;
  return 0;
}
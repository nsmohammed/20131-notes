#include <iostream>
using namespace std;

class IntArr{
  int* _data;
  unsigned int _size;
public:
  IntArr(unsigned int size){
    _data = new int[_size = size];
  }
  int& operator[](unsigned int index){
    if(index >= _size){
      unsigned int newsize =  index < 1024 ? index*2 : index + 1024;
      int* temp = new int[newsize];
      for(int i=0;i<_size;i++){
        temp[i] = _data[i];
      }
      delete[] _data;
      _data = temp;
      _size = newsize;
    }
    return _data[index];
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



class IntArrArr{
  IntArr** _data;
  unsigned int _size;
  unsigned int _width;
public:
  IntArrArr(unsigned int size,unsigned int width){
    _data = new IntArr*[_size = size];
    for(int i=0;i<size;i++){
      _data[i] = (IntArr*)0;
    }
    _width = width;
  }
  IntArr& operator[](unsigned int index){
    if(_data[index%_size] == 0){
      _data[index%_size] = new IntArr(_width);
    }
    return *_data[index%_size];
  }

  unsigned int Size()const{
    return _size;
  }
  virtual ~IntArrArr(){
    for(int i=0;i<_size;i++){
      if(_data[i]){
        delete _data[i];
      }
    }
    delete[] _data;
  }
};


int main(){
  IntArrArr I(5, 4);
  int i;
  int j;
  for(i=0;i<5;i++){
    for(j=0;j<4;j++){
      I[i][j] = (i+1) * (j+1);
    }
  }
  for(i=0;i<5;i++){
    for(j=0;j<4;j++){
      cout<<I[i][j]<< " ";
    }
    cout<<endl;
  }
  return 0;
}



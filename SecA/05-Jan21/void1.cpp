#include <iostream>
using namespace std;


void copyMem(char* des, const char* src, unsigned int size){
  unsigned int i;
  for(i=0;i<size;i++){
    des[i] = src[i];
  }
}

int main(){
  double s = 1234.56789;
  double d;
  copyMem((char*)&d, (char*)&s, sizeof(double));
  cout<<d<<endl;
  return 0;
}
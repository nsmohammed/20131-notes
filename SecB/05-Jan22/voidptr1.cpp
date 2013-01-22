#include <iostream>
using namespace std;

void copyMem(char* des,const char* src, unsigned int size){
  unsigned int i;
  for(i=0;i<size;i++){
    des[i] = src[i];
  }
}


int main(){
  double s = 123.456778;
  double d;
  int a = 32;
  int b;
  copyMem((char*)&d, (const char*)&s, sizeof(double));
  cout<<d<<endl;
  copyMem((char*)&b, (const char*)&a, sizeof(a));
  cout<<b<<endl;
  return 0;
}
#include <iostream>
using namespace std;

void copyMem(void* des,const void* src, unsigned int size){
  unsigned int i;
  for(i=0;i<size;i++){
    ((char*)des)[i] = ((const char*)src)[i];
  }
}


int main(){
  double s = 123.456778;
  double d;
  int a = 32;
  int b;
  copyMem(&d, &s, sizeof(double));
  cout<<d<<endl;
  copyMem(&b, &a, sizeof(a));
  cout<<b<<endl;
  return 0;
}
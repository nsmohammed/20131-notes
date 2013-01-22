#include <iostream>
using namespace std;

void copyMem(void* vdes,const void* vsrc, unsigned int size){
  unsigned int i;
  char* des = (char*)vdes;
  const char* src = (const char*)vsrc;
  for(i=0;i<size;i++){
    des[i] = src[i];
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
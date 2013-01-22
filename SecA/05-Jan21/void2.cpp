#include <iostream>
using namespace std;


void copyMem(void* vdes, const void* vsrc, unsigned int size){
  char* des = (char*)vdes;
  const char* src = (char*)vsrc; 
  unsigned int i;
  for(i=0;i<size;i++){
    des[i] = src[i];
  }
}

int main(){
  double s = 1234.56789;
  double d;
  int i = 234;
  int j;
  copyMem(&d, &s, sizeof(double));
  cout<<d<<endl;
  copyMem(&j, &i, sizeof(int));
  cout<<j<<endl;
  return 0;
}
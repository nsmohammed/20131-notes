#include <iostream>
using namespace std;


void copyMem(void* des, const void* src, unsigned int size){
  unsigned int i;
  for(i=0;i<size;i++){
    *(((char*)des)+i) = *(((char*)src)+i);
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
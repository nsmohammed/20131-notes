#include <iostream>
#include <cstdarg>
using namespace std;

double aver(int narg,...){
  double avr = 0;
  va_list varg;
  int i;
  va_start(varg, narg);
  for(i=0;i<narg;i++){
    avr += va_arg(varg, double);
  }
  avr = avr / narg;
  return avr;
}


int main(){
  double d;
  d = aver(3, 123.45,234.34,1212.3);
  cout<<d<<endl;
  d = aver(4, 234.4,123.45,234.34,1212.3);
  cout<<d<<endl;
  return 0;
}
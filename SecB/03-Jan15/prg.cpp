#include <iostream>
//#include <stdarg.h>
#include <cstdarg>
using namespace std;
double dblavr(int n,...){
  double avr = 0.0;
  double arg;
  va_list args;
  int i;
  va_start(args, n);
  for(i=0;i<n;i++){
    arg = va_arg(args, double); 
    avr += arg;
  }
  va_end(args);
  return avr/n;
}
int main(){
  double d;
  d = dblavr(5, 1.1,2.2,3.3,4.4,5.5);
  cout<<d<<endl;
  d = dblavr(2,3.3,4.4);
  cout<<d<<endl;
  return 0;
}

#include <iostream>
using namespace std;

//#define PI 3.14159265

const double PI = 3.14159265;

int main(){
  const double* cp;
  // cp is not const but *cp is
  double val ;
  double* const ccp  = &val;
  // ccp is const, but *ccp is not;
  // ccp will always point to val and nowhere else
  const double* const cPI = &PI;
  // cPI and *cPI are const
  return 0;
}


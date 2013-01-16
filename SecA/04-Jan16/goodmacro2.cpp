#include <iostream>
using namespace std;
#define sum(x,y) ((x)+(y))

#define maxOf(x,y) ((x)>(y)?(x):(y))

#define make(v, t) t v

int main(){
  make(a, int) = 2;
  int b = 3;
  double f = 2.0001;
  double g = 3.0001;
  cout<<(sum(a,b)*4)<<endl;  
  cout<<(sum(f,g)*4)<<endl;  
  cout<<maxOf(f, g)<<endl;
  return 0;
}


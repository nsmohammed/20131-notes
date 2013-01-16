#include <iostream>
using namespace std;
#define sum(x,y) ((x)+(y))
#define maxOf(x, y) ((x)>(y)?(x):(y))

#define make(v, t) t v
#define init(v, t , n) t v = n
int main(){
  make(a , int) = 2;
  init(b, int, 3);
  double f = 2.00001;
  double g = 3.00001;
  cout<<(sum(a,b)*4)<<endl;
  cout<<(sum(f,g)*4)<<endl;
  cout<<maxOf(f, g)<<endl;
  return 0;
}


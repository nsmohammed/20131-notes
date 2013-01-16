#include <iostream>
using namespace std;

#define DEBUG

#define sum(x,y) ((x)+(y))
#define maxOf(x, y) ((x)>(y)?(x):(y))

#define make(v, t) t v
#define init(v, t , n) t v = n
int main(){
  make(a , int) = 2;
  init(b, int, 3);
  double f = 2.00001;
  double g = 3.00001;
#ifdef DEBUG
  int i;
  double v;
  i = sum(a,b);
  cout<<i<<endl;
#endif
  cout<<(sum(a,b)*4)<<endl;
  cout<<(sum(f,g)*4)<<endl;
#ifdef DEBUG
  v = maxOf(f, g);
  cout<<v<<endl;
#endif
  cout<<maxOf(f, g)<<endl;
  return 0;
}


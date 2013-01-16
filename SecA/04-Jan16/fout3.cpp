#include <cstdio>
using namespace std;


class MyOutput{
public:
  MyOutput& operator<<(const char* s){
    printf(s);
    return *this;
  }
  MyOutput&   operator<<(int i){
    printf("%d", i);
    return *this;
  }
  MyOutput&   operator<<(double d){
    printf("%lf", d);
    return *this;
  }
};

int main(){
  MyOutput fout;
  fout<<"hello I am Fardad. I have "<<12.34<<" Dollars in my "<<2<<" bags\n";
  return 0;
}
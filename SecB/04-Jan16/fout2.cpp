#include <cstdio>
using namespace std;


class MyOutput{
public:
  MyOutput& prn(const char* s){
    printf(s);
    return *this;
  }
  MyOutput& prn(int i){
    printf("%d", i);
    return *this;
  }
  MyOutput& prn(double d){
    printf("%lf", d);
    return *this;
  }
};
int main(){
  MyOutput fout;
  fout.prn("hello I am Fardad. I have ").prn(12.34).prn(" Dollars in my ").prn(2).prn(" bags\n");
  return 0;
}
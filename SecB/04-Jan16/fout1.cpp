#include <cstdio>
using namespace std;


class MyOutput{
public:
  void prn(const char* s){
    printf(s);
  }
  void prn(int i){
    printf("%d", i);
  }
  void prn(double d){
    printf("%lf", d);
  }
};
int main(){
  MyOutput fout;
  fout.prn("hello I am Fardad. I have ");
  fout.prn(12.34);
  fout.prn(" Dollars in my ");
  fout.prn(2);
  fout.prn(" bags\n");
  return 0;
}

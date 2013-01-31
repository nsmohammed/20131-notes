#include <cstdio>
using namespace std;

int add(int a, int b){
  return a + b;
}
int prnch(int ch, int n){
  while(n--){
    putchar(ch);
  }
  putchar('\n');
  return n;
}
int main(){
  int (*fptr)(int , int);
  int x = 10;
  int y = 20;
  int z;
  fptr = add;
  z = fptr(x, y);
  fptr = prnch;
  x = fptr('X', 20);
  return 0;
}
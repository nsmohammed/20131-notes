#include <cstdio>
using namespace std;

int add(int a, int b){
  return a + b;
}
int prnch(int ch, int n){
  while(n-- != 0){
    putchar(ch);
  }
  putchar('\n');
  return n;
}
int main(){
  int x = 10;
  int y = 20;
  int z;
  z = add(x, y);
  x = prnch('X', 20);

  printf("%u\n", prnch);
  printf("%u\n", add);
  printf("%u\n", main);
  return 0;
}
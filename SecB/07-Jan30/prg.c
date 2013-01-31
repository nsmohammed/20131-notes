#include <stdio.h>

int main(){
  int b = 2;
  int d = 3;
  int c = 1;
  b = b>d && (c+=1);
  printf("%d, %d, %d\n", b, d, c);
  return 0;
}
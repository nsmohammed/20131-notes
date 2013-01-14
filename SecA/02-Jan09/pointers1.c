#include <stdio.h>
int main(){
  short s = 5;
  short* p;
  printf("s: %d\n", s);
  printf("p: %u\n", p);
  p = &s;
  printf("s: %d is at p: %u\n", s, p);
  s = 10;
  printf("s: %d is at p: %u\n", s, p);
  *p = 30;
  printf("s: %d is at p: %u\n", *p, p);
  s++;
  printf("s: %d is at p: %u\n", *p, p);
  p++;
  printf("p: %u\n", p);
  *p = 50;
  printf("%d is at p: %u\n", *p, p);
  return 0;
}
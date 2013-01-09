#include <stdio.h>
int main(){
  short s = 5;
  short* p;
  printf("s is: %d \n", s);
  printf("p is: %u \n", p);
  p = &s;
  printf("s: %d is at p: %u\n", s, p);
  s = 10;
  printf("s: %d is at p: %u\n", s, p);
  *p = 30;
  printf("s: %d is at p: %u\n", *p, p);
  s++;
  printf("s: %d is at p: %u\n", *p, p);
  p++;
  printf("%d is at p: %u\n", *p, p);
  *p = 50; /* crashes the program since i am writing into a memory location that does
           not belong to this program */
  printf("%d is at p: %u\n", *p, p);
  return 0;
}
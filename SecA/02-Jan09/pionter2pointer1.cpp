#include <stdio.h>
int main(){
  short a[5] = {100,200,300,400,500};
  short* p = a;
  short** q = &p;
  printf("%d \n", *p);
  printf("%d \n", **q);
  (*q)+=3;
  printf("%d \n", *p);  
  return 0;
}
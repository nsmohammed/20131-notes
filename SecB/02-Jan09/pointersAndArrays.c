#include <stdio.h>
int main(){
  short a[5] = {100,200,300,400,500};
  short* p = a;
  int i;
  for(i=0;i<5;i++){
    printf("%d ", p[i]);
  }
  printf("\n");
  printf("%d\n", *a);
  printf("%d\n", *(a+0));
  printf("%d\n", *(a+1));
  for(i=0;i<5;i++){
    printf("%d ", *(a+i));
  }
  putchar('\n');
  p+=2;
  printf("%d\n", p[0]);
  p = &a[4];
  for(i=0;i<5;i++){
    printf("%d ", *p);
    p--;
  }  
  printf("\n");
  for(p=&a[4],i=0;i<5;i++,printf("%d ", *p--));
  printf("\n");
  for(p=&a[4];p>=a;printf("%d ", *p--));
  printf("\n");
  return 0;
}
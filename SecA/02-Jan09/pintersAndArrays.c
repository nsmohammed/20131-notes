#include <stdio.h>
int main(){
  short a[5] = {100,200,300,400,500};
  short* p = a;
  int i;
  for(i=0;i<5;i++){
    printf("%d ", a[i]);
  }
  putchar('\n');
  for(i=0;i<5;i++){
    printf("%d ", p[i]);
   /* printf("%d ", *(p+i)); same as above */
  }
  putchar('\n');
  printf("%d\n", *a);
  printf("%d\n", *(a+0));
  printf("%d\n", *(a+1));
  printf("%d\n", *(a+4));
  p++;
  printf("%d \n", p[1]);
  p = &a[4];
  for(i=0;i<5;i++){
    printf("%d ", *p);
    p--;
  }
  putchar('\n');
  for(p=&a[4], i=0;i<5;i++, printf("%d ", *p--));
  putchar('\n');
  for(p=&a[4];p>=a;printf("%d ", *p--));
  putchar('\n');
  return 0;
}
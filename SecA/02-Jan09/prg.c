#include <stdio.h>
int main(){
  char s[80] = "Fardad";
  char ch = 'a';
  char* p = &ch;
  char** q = &p;
  printf("%c\n", ch);
  printf("%c\n", *p);
  printf("%c\n", **q);
  p = s;
  p++;
  printf("%s\n", p);
  (*q)+=2;
  printf("%s\n", p);
  return 0;
}
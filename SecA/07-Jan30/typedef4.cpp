#include <stdio.h>
#include <string.h>

struct Name{
  char first[20];
  char last[40];
} ;


int main(){
  Name N;
  strcpy(N.first,"john");
  return 0;
}
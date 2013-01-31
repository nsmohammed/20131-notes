#include <stdio.h>
#include <string.h>
struct Name{
  char first[20];
  char last[40];
};

int main(){
  struct Name N;
  strcpy(N.first, "John"); 
  return 0;
}
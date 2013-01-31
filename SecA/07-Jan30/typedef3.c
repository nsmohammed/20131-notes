#include <stdio.h>
#include <string.h>

typedef 
  struct NAME 
  Name;

struct NAME{
  char first[20];
  char last[40];
};

int main(){
  Name N;
  strcpy(N.first, "John"); 
  return 0;
}
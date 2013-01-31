#include <stdio.h>
#include <string.h>

typedef
struct {
  char first[20];
  char last[40];
} 
Name;


int main(){
  Name N;
  strcpy(N.first,"john");
  return 0;
}
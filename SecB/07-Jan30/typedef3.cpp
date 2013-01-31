#include <stdio.h>
#include <string.h>
struct {
  char first[20];
  char last[40];
} N;

int main(){
  strcpy(N.first, "John"); 
  return 0;
}
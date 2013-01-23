#include "console.h"

using namespace cio;

void box(){
  console.setPos(10, 20);
  console<<"@@@@@@@@@@@@@@@@@@@@@@";
  console.setPos(11, 20);
  console<<"@@@@@@@@@@@@@@@@@@@@@@";
  console.setPos(12, 20);
  console<<"@@@@@@@@@@@@@@@@@@@@@@";
}

int main(){
  char str[] = "abcdefghijklmnopqrstuvwxyz";
  box();
  console.display(str, 11, 21);
  console.pause();
  console.clear();
  box();
  console.display(str, 11, 21, 20);
  console.pause();
  str[7] = 0;
  console.clear();
  box();
  console.display(str, 11, 21, 20);
  console.pause();
  return 0;
}
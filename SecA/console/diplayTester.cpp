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
  box();
  console.display("Hello", 11, 21, 20);
  console.pause();
  box();
  console.display("abcdefghijklmnopqrstuvwxyz", 11, 21, 20);
  console.pause();
  box();
  console.display("abcdefghijklmnopqrstuvwxyz", 11, 21);
  console.pause();
  return 0;
}
#include "console.h"
using namespace cio;
int main(){
  console.setPos(5,10);
  console.putChar('X');
  console.pause();
  return 0;
}
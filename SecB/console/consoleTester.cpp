#include "console.h"

using namespace cio;

int main(){

  console.setPos(5, 15);
  console.putChar('X');
  console.pause();

  return 0;
}
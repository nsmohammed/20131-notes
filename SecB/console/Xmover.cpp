#include "console.h"

using namespace cio;

int main(){
  bool done = false;
  int row = console.getRows()/2;
  int col = console.getCols()/2;
  int key ;
  while(!done){
    console.setPos(row, col);
    console.putChar('X');
    key = console.getKey();
    console.setPos(row, col);
    console.putChar('.');
    switch(key){
    case UP:
      if(row > 0 ){
        row--;
      }
      else{
        console.alarm();
      }
      break;
    case DOWN:
      if(row < console.getRows()-1){
        row++;
      }
      else{
        console.alarm();
      }
      break;
    case LEFT:
      if(col > 0){
        col--;
      }
      else{
        console.alarm();
      }
      break;
    case RIGHT:
      if(col < console.getCols()-1){
        col++;
      }
      else{
        console.alarm();
      }
      break;
    case ESCAPE:
      done = true;
      break;
    }
  }

  return 0;
}
#include "console.h"

namespace cio{

  Console console; // Global console 
  void Console::display(const char* str, int row, int col, int fieldLen){
    int i;
    console.setPos(row, col);
    if(fieldLen == 0){
      for(i=0;str[i] != 0;i++){
        console.putChar(str[i]);
      }
    }
    else{
      for(i=0;str[i] != 0 && i<fieldLen;i++){
        console.putChar(str[i]);
      }
      for(;i<fieldLen;i++){
        console.putChar(' ');
      }
    }
  }
  int  Console::edit(char *str, int row, int col, int fieldLength, int maxStrLength, 
         bool* insertMode, int* strOffset, int* curPosition,  
         bool IsTextEditor, bool ReadOnly){
    int key = 0;
    bool done = false;
    while(!done){
      display(str + *strOffset , row, col, fieldLength); 
      setPos(row, col + *curPosition);
      key = getKey();
      switch(key){
      case LEFT:
        if(*curPosition != 0){
          (*curPosition)--;
        }
        else if(*strOffset != 0){
          (*strOffset)--;
        }
        break;
      case HOME:
        *strOffset = *curPosition = 0;
        break;
      case ESCAPE:
        done = true;
        break;
      }
    }
    return key;
  }
  Console& operator<<(Console& cn, const char* str){
    int i;  
    for(i=0;str[i] != 0;i++){
      cn.putChar(str[i]);
    }
    return cn;
  }






};
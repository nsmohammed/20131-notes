#include "console.h"

namespace cio{

  Console console;

  void Console::display(const char* str, int row, int col, int fieldLen){
    setPos(row, col);
    if(fieldLen == 0){
      *this<<str;
    }
    else{
      int i;
      for(i=0;str[i] != 0 && i<fieldLen;i++){
        putChar(str[i]);
      }
      for(;i<fieldLen;i++){
        putChar(' ');
      }
    }
  }
  int  Console::edit(char *str, int row, int col, int fieldLength, int maxStrLength, 
         bool* insertMode, int* strOffset, int* curPosition,  
         bool IsTextEditor, bool ReadOnly){
    bool done = false;
    int key = 0;
    while(!done){
      display(str + *strOffset, row, col, fieldLength);
      setPos(row, col + *curPosition);
      key = getKey();
      switch(key){
      case LEFT:
        if(*curPosition > 0){
          (*curPosition)--;
        }
        else if(*strOffset > 0){
          (*strOffset)--;
        }
        break;
      case HOME:
        *curPosition = *strOffset = 0;
        break;
      case ESCAPE:
        done = true;
        break;
      case ENTER:
        done = true;
      default:
        if(key >= ' ' && key <= '~'){
          if(*insertMode){
          }
          else{
            str[*strOffset + *curPosition] =  key;
            (*curPosition)++; 
          }
        }
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
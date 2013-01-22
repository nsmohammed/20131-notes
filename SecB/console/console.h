#ifndef __FS_CONSOLE_H__
#define __FS_CONSOLE_H__
#include "bconsole.h"
namespace cio{
  class Console:public bio::BConsole{
  private:
  public:
    void display(const char* str, int row, int col, int fieldLen=0); 


  };
  extern Console console; // makes console Global
};
#endif

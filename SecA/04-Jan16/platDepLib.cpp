#include "platDepLib.h"

#if PLT == LX

bool manage(int uid, char* perm){
  // do it linux style.....

  return true;
}

#elif PLT == VC 

bool manage(int uid, char* perm){
  // do it Visual C style.....

  return true;
}

#elif PLT == BC

bool manage(int uid, char* perm){
  // do it Borland style.....

  return true;
}

#elif PLT == MC

bool manage(int uid, char* perm){
  // do it Mac style.....

  return true;
}


#else
  syserr("no platform set");
#endif

#include <reset.h>

reset::getResetSource(){
  return MCUSR;
}

reset::clearReset(){
  MCUSR &= 0xf0;
}

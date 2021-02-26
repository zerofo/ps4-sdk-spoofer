#include "ps4.h"
#define SPOOF_FW 0x09990000

int _main(struct thread *td) {
  UNUSED(td);

  initKernel();
  initLibc();

  jailbreak();
  sdk_spoofer(SPOOF_FW);

  initSysUtil();

  printf_notification("SDK SPOOF. by zerofo");

  return 0;
}

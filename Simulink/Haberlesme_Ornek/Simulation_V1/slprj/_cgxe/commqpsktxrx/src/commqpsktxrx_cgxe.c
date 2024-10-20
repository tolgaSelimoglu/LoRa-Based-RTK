/* Include files */

#include "commqpsktxrx_cgxe.h"
#include "m_BTWFqGYD8aagFTEBQPdwsF.h"
#include "m_FpwZVT78uS5A5Xdp3o5d3.h"

unsigned int cgxe_commqpsktxrx_method_dispatcher(SimStruct* S, int_T method,
  void* data)
{
  if (ssGetChecksum0(S) == 3026962047 &&
      ssGetChecksum1(S) == 1627155421 &&
      ssGetChecksum2(S) == 544493786 &&
      ssGetChecksum3(S) == 795458139) {
    method_dispatcher_BTWFqGYD8aagFTEBQPdwsF(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3896551886 &&
      ssGetChecksum1(S) == 3098349591 &&
      ssGetChecksum2(S) == 1866720430 &&
      ssGetChecksum3(S) == 2525523076) {
    method_dispatcher_FpwZVT78uS5A5Xdp3o5d3(S, method, data);
    return 1;
  }

  return 0;
}

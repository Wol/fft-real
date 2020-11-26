#include "ffft/FFTRealFixLen.h"
#include <stdlib.h>


ffft::FFTRealFixLen<11> m_fft;

int main() {


  float in[2048];
  float out[2048];


  for(int i = 0; i < 10000; i++) {

    for(int x = 0 ; x < 2048; x++){
      in[x] = (float)rand();
    }

    m_fft.do_fft(out, in);
  }
}

#include "mylib.h"
#include <stdio.h>

typedef MyTmpl<int> MyTmplInt;

int main() {

  MyTmplFloat Mfloat; // defined inside static lib
  printf("MyTmplFloat of %d\n", Mfloat.a);

  MyTmplInt Mint; // defined here
  printf("MyTmplInt of %d\n", Mint.a);


  return 0;
}

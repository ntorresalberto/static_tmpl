#include "mylib.h"
#include <stdio.h>

// template class MyTmpl<int>;
// typedef MyTmpl<int> MyTmplInt;
using MyTmplInt = MyTmpl<int>; // equivalent


#define USE_CPP_FUNCTION
#ifdef USE_CPP_FUNCTION
// MyTmpl<int>.cpp_func() requires to include cpp
// to avoid linking errors
#include "mylib.cpp"
#endif


int main() {

  MyTmplFloat Mfloat; // defined inside static lib
  printf("MyTmplFloat of %d\n", Mfloat.a);
  printf("MyTmplFloat.h_func() of %d\n", Mfloat.h_func());
  printf("MyTmplFloat.cpp_func() of %d (no need for include)\n", Mfloat.cpp_func());

  MyTmplInt Mint; // defined here
  printf("MyTmplInt of %d\n", Mint.a);
  printf("MyTmplInt.h_func() of %d (works without include)\n", Mint.h_func());

#ifdef USE_CPP_FUNCTION
  printf("MyTmplInt.cpp_func() of %d (requires include mylib.cpp)\n", Mint.cpp_func());
#endif

  return 0;
}

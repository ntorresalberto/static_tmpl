#include <mylib.h>

template <class T> T MyTmpl<T>::cpp_func() { return this->a; }

template float MyTmpl<float>::cpp_func();

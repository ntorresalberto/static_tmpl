#pragma once

#include <iostream>

template <class T> struct MyTmpl {
  T a;
  MyTmpl() : a(0) {
    std::cout << "MyTempl<" << typeid(T).name() << ">()" << std::endl;
  }
  T cpp_func();
  T h_func(){
    return a;
  }
};

typedef MyTmpl<float> MyTmplFloat;

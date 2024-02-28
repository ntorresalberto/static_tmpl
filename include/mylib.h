#pragma once

#include <iostream>

template <class T> struct MyTmpl {
  T a;
  MyTmpl(){
    std::cout << "MyTempl<" << typeid(T).name() << ">()" << std::endl;
    a = 0;
  }
  T show();
};

typedef MyTmpl<float> MyTmplFloat;

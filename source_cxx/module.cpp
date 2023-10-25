#include <pybind11/pybind11.h>

#include "hello.h"

PYBIND11_MODULE(hello,m){
    m.doc() = "pybind11 hello plugin";                                  // optional module docstring
    m.def("say_hello", &say_hello, "A function which says hello");      // the thing we want to call in python
}





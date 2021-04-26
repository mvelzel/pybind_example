#include <pybind11/pybind11.h>
#include <rubberband/RubberBandStretcher.h>

float add_fn(float x1, float x2) {
    return x1 + x2;
}

PYBIND11_MODULE(example_a, handle) {
    handle.doc() = "This is the docstring for example A";
    handle.def("add_fn_python", &add_fn);
}

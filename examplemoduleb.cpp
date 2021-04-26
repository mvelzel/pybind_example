#include <pybind11/pybind11.h>
#include <boost/lexical_cast.hpp>
#include "example_include/state_holder.h"
#include <string>

namespace py = pybind11;

using boost::lexical_cast;
using namespace example_include;

int string_to_int(std::string input) {
    return lexical_cast<int>(input);
}

PYBIND11_MODULE(example_b, handle) {
    handle.doc() = "This is the docstring for example B";
    handle.def("string_to_int", &string_to_int);

    py::class_<StateHolder>(handle, "PyStateHolder")
        .def(py::init<std::string>())
        .def_property("state",
                &StateHolder::GetState,
                &StateHolder::SetState);
}

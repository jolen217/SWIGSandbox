%module example

%{
#include "example.h"
%}

%include "std_vector.i"

namespace std {
    %template(IntVector) vector<int>;
}

// Inline functions for getter and setter operations
%inline %{
    float get_element(PySegment* fa, int index) {
        if (index >= 0 && index < 3) {
            return fa->fArr[index];
        }
        return 0.0f; // or throw an exception
    }

    void set_element(PySegment* fa, int index, float value) {
        if (index >= 0 && index < 3) {
            fa->fArr[index] = value;
        }
        // else throw an exception
    }
%}

%ignore Dummy;

%include "example.h"

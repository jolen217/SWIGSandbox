%module example
%{
#include "example.h"
%}

%include "std_vector.i"

namespace std {
    %template(IntVector) vector<int>;
}

%include "example.h"

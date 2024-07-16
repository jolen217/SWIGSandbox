#include <vector>

struct PyList {
    float fArr[3];
};
struct PySegment {
    int label;
    std::vector<int> mask;
    PyList arr;
};

struct Dummy {
    std::vector<unsigned char> foo;
};

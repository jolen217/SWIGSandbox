#include <vector>

struct PySegment {
    int label;
    std::vector<int> mask;
    float fArr[3];
};

struct Dummy {
    std::vector<unsigned char> foo;
};

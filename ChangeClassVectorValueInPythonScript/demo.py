from example import *

seg = PySegment()
seg.label = 0
seg.mask.push_back(1)
seg.mask.push_back(2)
seg.mask.push_back(3)
seg.mask.push_back(4)
seg.mask[2] = -1

print(seg.label)
for v in seg.mask:
    print(v)

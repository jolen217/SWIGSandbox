from example import *

seg = PySegment()
seg.label = 0
seg.mask.push_back(1)
seg.mask.push_back(2)
seg.mask.push_back(3)
seg.mask.push_back(4)
seg.mask[2] = -1
set_element(seg, 0, 0.9)
set_element(seg, 1, 0.8)
set_element(seg, 2, 0.7)

print(seg.label)
for v in seg.mask:
    print(v)
for i in range(3):
    print(get_element(seg, i))

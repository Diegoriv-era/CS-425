# Results for Assignment 01

## Improvement Iterations

Here's a table showing the improvements I did to make the application go faster.  The **Time** column in the table represents the _wall-clock time_ for a program run.

| Version | Time | Speedup | Memory (KB) | Changes |
| :-----: | ---- | :-----: | :------: | ------- |
| [01](01.cpp) | 32.91s | &mdash; | 1041128 | Initial version - no changes (only -pg)                      |
| [02](01.cpp)| 2.59s | 14.12x | 1041212 | Compiled with -O3 & -pg to see time decrease                    |
| [03](03.cpp) | 2.52s | .99x| 1041212 | Compiled with -O3 & -pg & -funroll-all-loops to see time decrease |

## Profiling Analysis

### Initial Review Version 1
Looking at [01's profile](01.prof), the hottest function was `Transform::float4::dot(Vertex const&) const`, which consumed around 21% of the program's execution time. 

### Review Version 2
Looking at [02's profile](02.prof), the hottest function was `Transform::float4::dot(Vertex const&) const`, which consumed around 21% of the program's execution time. 

### Review Version 3
Looking at [03's profile](03.prof), the hottest function was `Transform::float4::dot(Vertex const&) const`, which consumed around 21% of the program's execution time. 


### Trying to make `perspectiveDivide()` go faster

`perspectiveDivide()` does several divisions by the same value `w`.  A common trick is instead of dividing by the same value multiple times, to compute the value's reciprocal, and multiple by that value.  This assumes that multiplication is a faster operation than division.

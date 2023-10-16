# Results for Assignment 02

## Improvement Iterations

Here's a table showing the improvements I did to make the application go faster.  The **Time** column in the table represents the _wall-clock time_ for a program run.

| Version      | Time   | Speedup | Memory (KB) | Changes                                                           |
| :-----:      | ----   | :-----: | :------:    | -------                                                           |
| [01](01.cpp) | 9.73s  | &mdash; | 1041272     | Initial version - no changes                                      |
| [02](01.cpp) | 32.91s | -3.38x  | 1041128     | Compiled with -pg                                                 |
| [03](01.cpp) | 2.59s  | +3.76X  | 1041212     | Compiled with -O3 & -pg to see time decrease                      |
| [04](01.cpp) | 2.52s  | +3.86X  | 1041212     | Compiled with -O3 & -pg & -funroll-all-loops to see time decrease |

## Profiling Analysis

### Review Version 2
Looking at [01's profile](01.prof), the hottest function was `Transform::float4::dot(Vertex const&) const`, which consumed around 21% of the program's execution time. 

### Review Version 3
Looking at [02's profile](02.prof), the hottest function was `computePerimeter(Face const&, std::span<Vertex, 18446744073709551615ul> const&)`, which consumed around 80% of the program's execution time. 

### Review Version 4
Looking at [03's profile](03.prof), the hottest function was `computePerimeter(Face const&, std::span<Vertex, 18446744073709551615ul> const&)`, which consumed around 79% of the program's execution time but read time did jump by 1 percent. 

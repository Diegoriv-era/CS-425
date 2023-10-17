# Results for Assignment 02

## Improvement Iterations

Here's a table showing the improvements I did to make the application go faster.  The **Time** column in the table represents the _wall-clock time_ for a program run.

| Version      | Time         | Speedup | Changes                                                                |
| :-----:      | ----         | :-----: | -------                                                                |
| [01](lychrel.cpp) | 11m 57s | &mdash; | Initial version - no changes                                           |
| [02](lychrel.cpp) | 1m 12s  | +10.33x  | Changed file to contain Direct Threading                               |
| [03](lychrel.cpp) | 2.59s   | +3.76X  | Compiled with -O3 & -pg to see time decrease                      |
| [04](lychrel.cpp) | 2.52s   | +3.86X  | Compiled with -O3 & -pg & -funroll-all-loops to see time decrease |

## Profiling Analysis

### Initial Review Version 1

### Version 2

### Version 3

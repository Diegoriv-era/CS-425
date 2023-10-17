# Results for Assignment 02

## Improvement Iterations

Here's a table showing the improvements I did to make the application go faster.  The **Time** column in the table represents the _wall-clock time_ for a program run.

| Version      | Time         | Speedup | Changes                                                                |
| :-----:      | ----         | :-----: | -------                                                                |
| [01](lychrel.cpp) | 11m 57s | &mdash; | Initial version - no changes (-O3)                                     |
| [02](lychrel.cpp) | 1m 12s  | +10.33x  | Changed file to contain Direct Threading (-O3)                        |
| [03](lychrel.cpp) | 1m 10s  | +10.51x  | Change file by adding Dynamic Scheuduling (-O3)                       |

## Profiling Analysis

### Initial Review Version 1
the program took very long especially when not compiled without any optimization flags. 
Ran the cpp with the make file and it ran much faster since it was flaged -o3

### Version 2 Review
In this version I added Direct Threading that was introduced in the class slides. This increased the runtime dramatically.
IT RAN 10.33 times faster!!

### Version 3 Review
In this version I only added Dynamic Scheduling into the code by replacing the for loop, with a while loop that used the getNext() function.
This change although very minimal increased the run time by 2 seconds. 

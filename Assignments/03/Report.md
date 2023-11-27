# Results for Assignment 03

## Improvement Iterations

Here's a table showing the improvements I did to make the application go faster.  The **Time** column in the table represents the _wall-clock time_ for a program run.

| Version             | Time    | Speedup  | Changes                                                                |
| :-----:             | ----    | :-----:  | -------                                                                |
| [01](server.cpp)    | 39.30s  | &mdash;  | Initial version - no changes                                           |
| [02](server_v1.cpp) | 31.66s  | +1.24x   | Implemented Asynch Future                                              |
| [03](lychrel.cpp)   | 1m 10s  | +10.51x  | Change file by adding Dynamic Scheuduling (-O3)                        |

## Profiling Analysis


### Initial Review Original Version 
297 requests, 560 MB transferred, 560 MB resources, Finish: 40.05 s
297 requests, 560 MB transferred, 560 MB resources, Finish: 41.05 s
297 requests, 560 MB transferred, 560 MB resources, Finish: 36.81 s
Average 39.3033 s


### Version 1 Review
297 requests, 560 MB transferred, 560 MB resources, Finish: 34.74 s
297 requests, 560 MB transferred, 560 MB resources, Finish: 28.45 s
297 requests. 560 MB transferred, 560 MB resources, Finish: 30.80 s
Average 31.6633 s


### Version 3 Review

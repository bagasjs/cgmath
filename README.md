# CGMATH
A tiny size graphic math library for C 

### NOTE
- **Implementation**
"cgmath.h" works like stb headers library. 
You need to create an implementation in a c/c++ file.
After an implementation made in one file, 
you include "cgmath.h" as an ordinary header file
Do this to create an implementation:
```c
#define CGMATH_IMPLEMENTATION
#include "cgmath.h"
```
For example your implementation file will look like this:
```c
#include <stdio.h>
#include <stdlib.h>
#define CGMATH_IMPLEMENTATION
#include "cgmath.h"
```

- **Platform**
If you are working on linux or other posix platform
You will need to link with the math library

### TODO
- Implement SIMD
- Implement general math like sin, cos, atan, pow, abs.

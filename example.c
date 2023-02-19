#define CGMATH_IMPLEMENTATION
#include "cgmath.h"

int main(void) {
    mat4_t proj = mat4_ortho(0.0f, 640.0f, 480.0f, 0.0f, 1.0f, -1.0f);
    mat4_t view = mat4_translation(vec3(0.0f, 0.0f, 0.0f));
    mat4_t model = mat4_translation(vec3(0.0f, 1.0f, 0.0f));
    return 0;
}
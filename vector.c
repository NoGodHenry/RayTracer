#include <math.h>

#include "headers/vector.h"
#include "headers/util.h"

void normalize(Vector3f* vec){
    float len = sqrt(SQUARE(vec->x) + SQUARE(vec->y) + SQUARE(vec->z));
    vec->x /= len;
    vec->y /= len;
    vec->z /= len;
}
void add(Vector3f* vec, Vector3f* added){
    vec->x += added->x;
    vec->y += added->y;
    vec->z += added->z;
}

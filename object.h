#pragma once

#include "vector.h"

typedef struct {
    bool visible;
    Vector3f position;
    Vector3f velocity;
    int radius;
    int radiusSq;
} Object;

extern Object* objects;
extern int objectCount;

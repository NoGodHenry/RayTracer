#pragma once

typedef struct {
    float x, y, z;
} Vector3f;

typedef struct {
    float x, y;
} Vector2f;

void normalize(Vector3f*);
void add(Vector3f*, Vector3f*);

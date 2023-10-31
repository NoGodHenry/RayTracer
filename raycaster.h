#pragma once

#include <stdbool.h>

#include "vector.h"

#define FOV 50
#define MAX_STEPS 10

bool raycast(int, int);
bool trace(Vector3f, Vector3f);
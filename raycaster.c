#include <stdbool.h>
#include <stdio.h>
#include <math.h>

#include "headers/raycaster.h"
#include "headers/vector.h"
#include "headers/object.h"
#include "headers/renderer.h"

Object* objects;
int objectCount;

bool raycast(int x, int y){
	float invWidth = 1/((float) width);
    float invHeight = 1/((float) height);
    float aspectRatio = width/((float) height);
    float angle = tan(M_PI * 0.5 * (FOV/180.0));
    float xx = (2*(x+0.5)*invWidth - 1) * angle * aspectRatio;
	float yy = (1 - 2*(y+0.5)*invHeight) * angle;
	Vector3f vec = { .x = xx, .y = yy, .z = -1};
    normalize(&vec);


}

bool intersect(Vector3f* position){
    for(int i = 0; i < objectCount; i++){
        Object* obj = &objects[i];
        if(!obj->visible)
            continue;

        if(SQUARE(obj->position.x - position->x) 
         + SQUARE(obj->position.y - position->y)
         + SQUARE(obj->position.z - position->z)){
            
        }
    }
}

bool trace(Vector3f origin, Vector3f direction){
    for(int i = 0; i < MAX_STEPS; i++){
        
        add(&origin, &direction);
    }
}
#include <stdio.h>

#include "headers/framebuffer.h"
#include "headers/renderer.h"
#include "headers/raycaster.h"

int width, height;

void render(FrameBuffer* fbo){
    for(int y = 0; y < height; y++){
        for(int x = 0; x < width; x++){
            raycast(x, height - y);
        }
    }
}
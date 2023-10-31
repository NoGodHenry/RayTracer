#include <stdio.h>
#include <stdlib.h>

#include "headers/raycaster.h"
#include "headers/framebuffer.h"
#include "headers/renderer.h"
#include "headers/object.h"

int main(int argc, char** argv) {
    if (argc != 3) {
        printf("%s width height\n", argv[0]);
        return 1;
    }

    width = atoi(argv[1]);
    height = atoi(argv[2]);

    printf("%d %d", width, height);

    int pixels = width * height; 

    FrameBuffer fbo = {
        .buffer = malloc(pixels),
        .size = pixels,
        .index = 0
    };

    render(&fbo);
}

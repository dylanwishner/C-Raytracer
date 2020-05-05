//
// Created by Dylan Wishner on 5/4/20.
//

#ifndef RAYTRACER_COLOR_H
#define RAYTRACER_COLOR_H

typedef struct {
    int r, g, b;
} Color;

void writeColor(Color color, FILE* image);

#endif //RAYTRACER_COLOR_H

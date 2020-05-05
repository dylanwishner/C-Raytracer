//
// Created by Dylan Wishner on 5/4/20.
//

#ifndef RAYTRACER_COLOR_H
#define RAYTRACER_COLOR_H

#include <stdio.h>

typedef struct {
    int r, g, b;
} Color;

Color RGBColor(int r, int g, int b);

void writeColor(Color color, FILE* image);

#endif //RAYTRACER_COLOR_H

//
// Created by Dylan Wishner on 5/4/20.
//

#ifndef RAYTRACER_COLOR_H
#define RAYTRACER_COLOR_H

#include <stdio.h>

typedef struct {
    double r, g, b;
} Color;

Color RGBColor(double r, double g, double b);

void writeColor(Color color, FILE* image);

#endif //RAYTRACER_COLOR_H

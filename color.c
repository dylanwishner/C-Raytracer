//
// Created by Dylan Wishner on 5/4/20.
//

#include <stdio.h>
#include "color.h"

Color RGBColor(double r, double g, double b) {
    Color color;
    color.r = r, color.g = g, color.b = b;
    return color;
}

void writeColor(Color color, FILE* image) {
//    printf("%f\n", color.g);
    fprintf(image, "%d %d %d\n", (int) (color.r * 255), (int) (color.g * 255), (int) (color.b * 255.0));
}
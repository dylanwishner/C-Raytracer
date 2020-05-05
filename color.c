//
// Created by Dylan Wishner on 5/4/20.
//

#include <stdio.h>
#include "color.h"

Color RGBColor(int r, int g, int b) {
    Color color;
    color.r = r, color.g = g, color.b = b;
    return color;
}

void writeColor(Color color, FILE* image) {
    fprintf(image, "%d %d %d\n", color.r, color.g, color.b);
}
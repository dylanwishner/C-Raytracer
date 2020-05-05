//
// Created by Dylan Wishner on 5/3/20.
//
#include <stdio.h>
#include <math.h>
#include "color.h"

void writeData(FILE* image, int width, int height) {

    fprintf(image, "P3\n%d %d\n255\n", width, height);

    for (int h = 0; h < height; ++h) {
        if (h % 10 == 0) {
            printf("%.2f%% complete\n", (double) 100 * h / height);
        }

        for (int w = 0; w < width; ++w) {
            Color color;

            color.r = floor(255 * w / (width - 1));
            color.g = floor(255 * h / (height - 1));
            color.b = 255;

            writeColor(color, image);
        }
    }
    printf("\nRENDER COMPLETE\n");
}

FILE* RenderedImage(int width, int height) {
    FILE* image = fopen("../image.ppm", "w");

    writeData(image, width, height);
    fclose(image);
    return image;
}
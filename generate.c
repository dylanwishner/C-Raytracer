//
// Created by Dylan Wishner on 5/3/20.
//
#include <stdio.h>
#include <math.h>

void writeData(FILE* image, int width, int height) {

    fprintf(image, "P3\n%d %d\n255\n", width, height);

    for (int h = 0; h < height; ++h) {
        if (h % 10 == 0) {
            printf("%.2f%% complete\n", (double) 100 * h / height);
        }

        for (int w = 0; w < width; ++w) {
            int r = floor(255 * w / (width - 1));
            int g = floor(255 * h / (height - 1));
            int b = 255;

            fprintf(image, "%d %d %d\n", r, g, b);
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
//
// Created by Dylan Wishner on 5/3/20.
//
#include <stdio.h>
#include <math.h>
#include "color.h"
#include "ray.h"

void writeData(FILE* image, int width, int height) {

    Point3 origin = NewVector(1.0, 1.0, 1.0);
    Vector3 horiz = NewVector(4.0, 0.0, 0.0);
    Vector3 vert = NewVector(0.0, 2.25, 0.0);
    Point3 lowerLeft = vec3Subtract(vec3Subtract(vec3Subtract(origin, divideConst(horiz, 2)),
                                                 divideConst(vert, 2)), NewVector(0.0, 0.0, 1.0));

    fprintf(image, "P3\n%d %d\n255\n", width, height);

    for (int h = 0; h < height; ++h) {
        if (h % 10 == 0) {
            printf("%.2f%% complete\n", (double) 100 * h / height);
        }

        for (int w = 0; w < width; ++w) {
            Color color;

            double u = h / (width - 1);
            double v = h / (height - 1);
            Ray ray = NewRay(origin, vec3Add(vec3Add(lowerLeft, multiplyConst(horiz, u)), multiplyConst(vert, v)));
            color = RayColor(ray);

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
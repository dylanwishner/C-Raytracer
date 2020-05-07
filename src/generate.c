//
// Created by Dylan Wishner on 5/3/20.
//
#include <stdio.h>
#include "color.h"
#include "ray.h"

void writeData(FILE* image, int width, int height) {

    Point3 origin = NewVector(0.0, 0.0, 0.0);
    Vector3 horiz = NewVector(4.0, 0.0, 0.0);
    Vector3 vert = NewVector(0.0, 2.25, 0.0);
    Point3 lowerLeft = vec3Subtract(vec3Subtract(vec3Subtract(origin, divideConst(horiz, 2)),
                                                 divideConst(vert, 2)), NewVector(0.0, 0.0, 1.0));

    fprintf(image, "P3\n%d %d\n255\n", width, height);

    for (int h = height - 1; h >= 0; --h) {
        for (int w = 0; w < width; ++w) {
            Color color;

            double u = (double) w / (width - 1);
            double v = (double) h / (height - 1);
            Ray ray = NewRay(origin, vec3Add(lowerLeft, vec3Add(multiplyConst(horiz, u), multiplyConst(vert, v))));
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
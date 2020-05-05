//
// Created by Dylan Wishner on 5/4/20.
//

#ifndef RAYTRACER_RAY_H
#define RAYTRACER_RAY_H

#include "vec3.h"
#include "color.h"

typedef struct {
    Point3 origin;
    Vector3 direction;
} Ray;

Ray NewRay(Point3 origin, Vector3 direction);
Point3 pointat(double t, Ray ray);
Color RayColor(Ray ray);

#endif //RAYTRACER_RAY_H

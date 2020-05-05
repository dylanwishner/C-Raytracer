//
// Created by Dylan Wishner on 5/4/20.
//

#include "ray.h"
#include "color.h"

Ray NewRay(Point3 origin, Vector3 direction) {
    Ray ray;
    ray.origin = origin, ray.direction = direction;
    return ray;
}

Point3 pointAt(double t, Ray ray) {
    return vec3Add(ray.origin, multiplyConst(ray.direction, t));
}

Color RayColor(Ray ray) {
    Vector3 unitDirection = unitVector(ray.direction);
    double t = 0.5 * (unitDirection.y + 1.0);
    int r, g, b = 1.0 - t;
    r += t * 0.5;
    g += t * 0.7;
    b += t * 1.0;

    return RGBColor(r, g, b);
}

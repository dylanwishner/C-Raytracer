//
// Created by Dylan Wishner on 5/6/20.
//

#include <stdbool.h>
#include <math.h>
#include "sphere.h"
#include "vec3.h"
#include "ray.h"

bool hitSphere(Point3 center, double radius, Ray ray) {
    Vector3 vec = vec3Subtract(ray.origin, center);
    double a = dotProduct(ray.direction, ray.direction);
    double b = 2.0 * dotProduct(vec, ray.direction);
    double c = dotProduct(vec, vec) - pow(radius, 2);
    double disc = pow(b, 2) - 4 * a * c;

    return (disc > 0);
}
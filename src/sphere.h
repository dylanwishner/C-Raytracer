//
// Created by Dylan Wishner on 5/6/20.
//

#ifndef RAYTRACER_SPHERE_H
#define RAYTRACER_SPHERE_H

#include <stdbool.h>
#include "vec3.h"
#include "ray.h"
bool hitSphere(Point3 center, double radius, Ray ray);

#endif //RAYTRACER_SPHERE_H

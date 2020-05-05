//
// Created by Dylan Wishner on 5/4/20.
//
#include "vec3.h"

Vector3 newVector(double x, double y, double z) {
    Vector3 vector3;
    vector3.x = x, vector3.y = y, vector3.z = z;
    return vector3;
}

Vector3 vec3_add(Vector3 a, Vector3 b) {
    return newVector(a.x + b.x, a.y + b.y, a.z + b.z);
}

Vector3 vec3_multiply(Vector3 a, Vector3 b) {
    return newVector(a.x * b.x, a.y * b.y, a.z * b.z);
}

Vector3 vec3_subtract(Vector3 a, Vector3 b) {
    return newVector(a.x - b.x, a.y - b.y, a.z - b.z);
}

Vector3 vec3_divide(Vector3 a, Vector3 b) {
    return newVector(a.x / b.x, a.y / b.y, a.z / b.z);
}
//
// Created by Dylan Wishner on 5/4/20.
//
#include "vec3.h"

Vector3 NewVector(double x, double y, double z) {
    Vector3 vector3;
    vector3.x = x, vector3.y = y, vector3.z = z;
    return vector3;
}

Vector3 vec3Add(Vector3 a, Vector3 b) {
    return NewVector(a.x + b.x, a.y + b.y, a.z + b.z);
}

Vector3 vec3Multiply(Vector3 a, Vector3 b) {
    return NewVector(a.x * b.x, a.y * b.y, a.z * b.z);
}

Vector3 vec3Subtract(Vector3 a, Vector3 b) {
    return NewVector(a.x - b.x, a.y - b.y, a.z - b.z);
}

Vector3 vec3Divide(Vector3 a, Vector3 b) {
    return NewVector(a.x / b.x, a.y / b.y, a.z / b.z);
}

Vector3 addConst(Vector3 vec, double f) {
    return NewVector(vec.x + f, vec.y + f, vec.z + f);
}

Vector3 multiplyConst(Vector3 vec, double f) {
    return NewVector(vec.x * f, vec.y * f, vec.z * f);
}

Vector3 subtractConst(Vector3 vec, double f) {
    return NewVector(vec.x - f, vec.y - f, vec.z - f);
}

Vector3 divideConst(Vector3 vec, double f) {
    return NewVector(vec.x / f, vec.y / f, vec.z / f);
}
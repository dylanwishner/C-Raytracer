//
// Created by Dylan Wishner on 5/4/20.
//

#ifndef RAYTRACER_VEC3_H
#define RAYTRACER_VEC3_H

typedef struct {
    double x, y, z;
} Vector3;

typedef Vector3 Point3;

Vector3 NewVector(double x, double y, double z);

Vector3 vec3Add(Vector3 a, Vector3 b);
Vector3 vec3Multiply(Vector3 a, Vector3 b);
Vector3 vec3Subtract(Vector3 a, Vector3 b);
Vector3 vec3Divide(Vector3 a, Vector3 b);

Vector3 addConst(Vector3 vec, double f);
Vector3 multiplyConst(Vector3 vec, double f);
Vector3 subtractConst(Vector3 vec, double f);
Vector3 divideConst(Vector3 vec, double f);

Vector3 unitVector(Vector3 vec);
Vector3 crossProduct(Vector3 a, Vector3 b);

double length(Vector3 vec);
double lengthSquared(Vector3 vec);
double dotProduct(Vector3 a, Vector3 b);

#endif //RAYTRACER_VEC3_H

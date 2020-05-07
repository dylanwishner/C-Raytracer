cmake_minimum_required(VERSION 3.15)
project(raytracer C)

set(CMAKE_C_STANDARD 99)

add_executable(raytracer src/main.c src/generate.c src/generate.h src/vec3.c src/vec3.h src/color.c src/color.h src/ray.c src/ray.h)
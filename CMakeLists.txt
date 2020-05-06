cmake_minimum_required(VERSION 3.15)
project(raytracer C)

set(CMAKE_C_STANDARD 99)

add_executable(raytracer main.c generate.c generate.h vec3.c vec3.h color.c color.h ray.c ray.h)
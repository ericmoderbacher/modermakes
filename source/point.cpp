//
// Created by Eric Moderbacher on 9/17/23.
//
#include <iostream>
#include <array>
#include "point.h"
#include "constraint.h"

point::point(uint64_t x, uint64_t y, uint64_t z): x(x), y(y), z(z), x_constraint(&x), y_constraint(&y), z_constraint(&z)
{
    //point exists if you just create it with values.
}







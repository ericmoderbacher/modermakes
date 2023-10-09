//
// Created by Eric Moderbacher on 9/17/23.
//
#include <iostream>
#include <array>
#include "point.h"
#include "constraint.h"

point::point(std::optional<uint64_t> x, std::optional<uint64_t> y, std::optional<uint64_t> z)
{
    if(x.has_value()){this->x_constraints.emplace_back(&x.value());};
    if(y.has_value()){this->y_constraints.emplace_back(&y.value());};
    if(z.has_value()){this->z_constraints.emplace_back(&z.value());};
}

//copy assignment operator
point & point::operator=(const point & p)
{
    this->x_constraints = p.x_constraints;
    this->y_constraints = p.y_constraints;
    this->z_constraints = p.z_constraints;
    return *this;
}

point::point() = default;







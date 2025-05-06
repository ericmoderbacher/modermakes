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

//these next three functions are not of sound logic.
//eventually they should validate the value is constrained to a single.... value
bool point::isXConstrained()
{
    //check to see if the x constraints resolves to a single value
    return this->x_constraints.size() == 1;
}
bool point::isYConstrained()
{
    //check to see if the y constraints resolves to a single value
    return this->y_constraints.size() == 1;
}
bool point::isZConstrained()
{
    return this->z_constraints.size() == 1;
}

bool point::isConstrained()
{
    //check if all of the point's components are constrained

    return (isXConstrained() && isYConstrained() && isZConstrained());

}

point::point() = default;







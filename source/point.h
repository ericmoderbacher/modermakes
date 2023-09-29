//
// Created by Eric Moderbacher on 9/28/23.
//

#ifndef LUA_AIDED_DESIGN_POINT_H
#define LUA_AIDED_DESIGN_POINT_H

#include "constraint.h"

class point
{
private:
    uint64_t x;
    uint64_t y;
    uint64_t z;

    constraint x_constraint;
    constraint y_constraint;
    constraint z_constraint;
public:

    point(uint64_t, uint64_t, uint64_t); //hopefully these will be simpler
    point(constraint, constraint, constraint);

    bool isConstrained();
};

#endif //LUA_AIDED_DESIGN_POINT_H

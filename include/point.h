//
// Created by Eric Moderbacher on 9/28/23.
//

#ifndef LUA_AIDED_DESIGN_POINT_H
#define LUA_AIDED_DESIGN_POINT_H

#include "constraint.h"
#include <vector>
#include <optional>

class point
{
private:
    uint64_t x;
    uint64_t y;
    uint64_t z;

    std::vector<constraint> x_constraints;
    std::vector<constraint> y_constraints;
    std::vector<constraint> z_constraints;

public:
    point(std::optional<uint64_t>, std::optional<uint64_t>, std::optional<uint64_t>);


    bool isConstrained();

    //function that accepts pointer to another point and returns a distance
    uint64_t * distance(point *);
};

#endif //LUA_AIDED_DESIGN_POINT_H

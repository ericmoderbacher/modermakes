//
// Created by Eric Moderbacher on 9/28/23.
//

#ifndef LUA_AIDED_DESIGN_POINT_H
#define LUA_AIDED_DESIGN_POINT_H

#include "constraint.h"
#include <vector>
#include <optional>
#include <memory>

class point
{
private:
    std::unique_ptr<uint64_t> x;
    std::unique_ptr<uint64_t> y;
    std::unique_ptr<uint64_t> z;

    std::vector<constraint> x_constraints;
    std::vector<constraint> y_constraints;
    std::vector<constraint> z_constraints;

public:
    point();
    point(std::optional<uint64_t>, std::optional<uint64_t>, std::optional<uint64_t>);

    //copy assignment operator
    point & operator=(const point &);


    bool isConstrained();
    bool isXConstrained();
    bool isYConstrained();
    bool isZConstrained();

    //function that accepts pointer to another point and returns a distance
    uint64_t * distance(point *);
};

#endif //LUA_AIDED_DESIGN_POINT_H

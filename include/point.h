//
// Created by Eric Moderbacher on 9/28/23.
//

#ifndef LUA_AIDED_DESIGN_POINT_H
#define LUA_AIDED_DESIGN_POINT_H

#include "constraint.h"
#include <vector>
#include <optional>
#include <memory>

template<typename constraintType>

class point
{
private:
    std::unique_ptr<constraintType> x;
    std::unique_ptr<constraintType> y;
    std::unique_ptr<constraintType> z;

    //This isnt quite right
    //std::vector<constraintType> x_constraints;
    //std::vector<constraintType> y_constraints;
    //std::vector<constraintType> z_constraints;

    //

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

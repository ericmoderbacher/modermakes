//
// Created by Eric Moderbacher on 9/28/23.
//

#ifndef LUA_AIDED_DESIGN_LINE_H
#define LUA_AIDED_DESIGN_LINE_H

#include "point.h"
#include <array>

class line
{
private:
    std::array<point, 2> ends;
};


#endif //LUA_AIDED_DESIGN_LINE_H

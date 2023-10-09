//
// Created by Eric Moderbacher on 9/28/23.
//

#ifndef LUA_AIDED_DESIGN_LINE_H
#define LUA_AIDED_DESIGN_LINE_H

#include "point.h"
#include "optional"
#include <array>

class line
{
private:
    std::pair<std::unique_ptr<point>, std::unique_ptr<point>> ends;

public:
    line(std::optional<std::unique_ptr<point>>, std::optional<std::unique_ptr<point>>);
    bool isPointOnLine(std::unique_ptr<point>);
    bool isConstrained();
};


#endif //LUA_AIDED_DESIGN_LINE_H

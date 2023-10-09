//
// Created by Eric Moderbacher on 9/28/23.
//

#include "line.h"


line::line(std::optional<std::unique_ptr<point>> start, std::optional<std::unique_ptr<point>> end)
{
    if(start.has_value()){this->ends.first = std::move(start.value());};
    if(end.has_value()){this->ends.second = std::move(end.value());};
}

bool line::isConstrained()
{
    //check if either end is constrained
    if(this->ends.first->isConstrained() && this->ends.second->isConstrained()){return true;};

    return false;
}

bool line::isPointOnLine(std::unique_ptr<point> p)
{
    //if point is not constrained return false
    //if(!p->isConstrained()){return false;};
    //check if line is constrained
    if(!this->isConstrained()){return false;};



    return false;
}
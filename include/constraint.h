//
// Created by Eric Moderbacher on 9/28/23.
//

#ifndef LUA_AIDED_DESIGN_CONSTRAINT_H
#define LUA_AIDED_DESIGN_CONSTRAINT_H

#include <cstdint>
#include <functional>

template<typename constraintType>
class constraint
{
private:
    constraintType * subject; //like of a sentence.

    std::function<bool(constraintType *)> predicate;

public:
    constraint(constraintType *);
};



#endif //LUA_AIDED_DESIGN_CONSTRAINT_H

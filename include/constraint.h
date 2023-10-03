//
// Created by Eric Moderbacher on 9/28/23.
//

#ifndef LUA_AIDED_DESIGN_CONSTRAINT_H
#define LUA_AIDED_DESIGN_CONSTRAINT_H

#include <cstdint>
#include <functional>

class constraint
{
private:
    uint64_t * subject; //like of a sentence.

    std::function<bool(uint64_t *)> predicate;

public:
    constraint(uint64_t *);
};


#endif //LUA_AIDED_DESIGN_CONSTRAINT_H

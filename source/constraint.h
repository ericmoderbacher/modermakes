//
// Created by Eric Moderbacher on 9/28/23.
//

#ifndef LUA_AIDED_DESIGN_CONSTRAINT_H
#define LUA_AIDED_DESIGN_CONSTRAINT_H

#include <cstdint>

class constraint
{
private:
    uint64_t * subject; //like of a sentence.

    //function pointer to a function that returns bool if the constraint is met.
    bool (*predicate)(uint64_t * subject);

public:
    constraint(uint64_t *);
};


#endif //LUA_AIDED_DESIGN_CONSTRAINT_H

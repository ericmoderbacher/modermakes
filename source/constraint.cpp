//
// Created by Eric Moderbacher on 9/28/23.
//

#include "constraint.h"
#include <cstdint>

//kind of like an "is" constraint... might just be a placeholder for now.
constraint::constraint(uint64_t * subject)
{
    //set the predicate to a function that always returns true so long as the subject is not null.
    this->predicate = std::function<bool(uint64_t *)>([](uint64_t * subject) -> bool {return subject != nullptr;});


    //set the subject to the subject.
    this->subject = subject;
}
//
// Created by Eric Moderbacher on 3/10/24.
//

//This header file is where we grab the high level design goals configured by the user
//So if they decide that they want to define geometry based on super high resolution counts of planck lengths they can... its probably what im going to play with first.



#ifndef LUA_AIDED_DESIGN_LAD_CONCEPTS_H
#define LUA_AIDED_DESIGN_LAD_CONCEPTS_H

template<typename T>
concept any_container = requires(T a) {
    a.begin();
    a.end();
};

#endif //LUA_AIDED_DESIGN_LAD_CONCEPTS_H

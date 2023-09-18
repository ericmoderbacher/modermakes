//
// Created by Eric Moderbacher on 9/17/23.
//
#include <iostream>

// These are how the user interacts with the program...
// The user only tells the program what must be true and the program returns the drawing or false if it is impossible
class UserConstraint
{
    //just a function pointer
    bool (*constraint)(std::vector<u_int64_t>);

};


// a point is fully constrained when it has a unique address for every dimension
// these constrains will have many sources and can either be explicit or defined by interactions of other objects such as collisions of 3 planes or 2 non-parallel lines
template <std::size_t numberOfDims> class Point
{
    private:
        std::array<u_int64_t, numberOfDims> spatialAddresses; // this is private because the only time this should be set by a user is if they are specifically using a user constraint

    public:
        Point(std::vector<UserConstraint> constraints) //esm todo change to a virtual base class constraint rather than just user constraints
        {

        }



};

// line must be described by two points.

class Line
{

};


int main()
{
    std::cout << "Hello World!";

    return 0;
}






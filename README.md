# Lua-Aided-Design
An Open Source Appliance Foundation Project, that lets users draft physical objects in lua.

But why?

Yeah I know there are already quite a few CAD options out there... LAD does have some reasons to exist and they are:

- 
- **Lua** is a great language for non-programmers.
  - It can be used without understanding computer science: for example numbers are doubles because teaching someone what numeric types are (and how or when to cast them) is only cool when they are interested.
  - It is small both in a computational and storage sense but also the whole language can be known by a single person in a reasonable amount of time.
- **Circles are not real**
  - I promise im not a crazy person, but in my mind a circle is just all locations a point can be from another.  Pi is rational the second you constrain your points to a grid.
- **APIs are their own language**
  - They are how we are going to agree to say what we are trying to communicate.
  - A good one has simple rules with nearly zero exceptions
  - A really good one will try to help the user understand what they are trying to say.
 - **Version Control features are a must for a community project**
 - **CAM and Slicers need to start having contextual information in the loop**
 - CAD could be (relatively) headless
 - 
## Features
I like to day dream of how cad will be in the future.  Those dreams will be my target features. and they are:
  - Free and Open Source
  - Headlessness first
    - A view port could be added as a debugging and validation tool
  - Parametric (obviously)
  - Version Control
  - python less... python has too many issues for me to love.
  - Doesnt reinvent anything outside of the cad api
    - There will be NO new filetypes only .lua .cmaketext .c .cpp .csv etc...
  - There is only one constraint to what you could design
    - You can describe any object that fits within an extreamly large volume (matrix, cube, hypercube)
    - I think the size of that cube is constrained to the smallest integer that cannot be represented by a double - 1.  (i think its around 1.11 × 10−16)

## How to use

A user should interact with geometry in only 2 ways:
  -Defining Constraints
  -Querying the geometry (to pass to a constraint or an exporter)



types of geometry:

Point
3 64 bit integers
plus any user defined data

Line
references to 2 points
plus any user defined data

Plane
references to 3 points
or some combination of lines and points depending
3 co linear points would throw exception or request another point.
plus any user defined data



Question:
how do i figure out where a line intersects a plane?

thoughts: 
-use the most significant bits to find where they match iteratively.
-force ever plane to be defined by the edges of the bounding box of our 64 bit universe. that way we can reduce the problem to a 2d problem.

Question: how do we work with things that are going to be constrained instead of defined?

Thoughts
When you add a point its values have ranges of possible values.
it could also be a bit mask to say if we know which location is which

instead of normal binary each bit defines which havel of the space we are in.  oh wait that is normal.














psudo code example:

lad::part cube;
cube.addConstraint(numberOfDimentions(3));
lad::point<3> centerPoint(0,0,0); //origin

cube.addGeometry(centerPoint)





# Lua-Aided-Design
An Open Source Appliance Foundation Project, that lets users draft physical objects in lua.

![butWhy.gif](Assests%2FImages%2FbutWhy.gif)
Yeah i know there are already quite a few CAD options out there... but i have my own opinions about how to communicate a spatial object in code and they are:

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




psudo code example:

lad::part cube;
cube.addConstraint(numberOfDimentions(3));
lad::point<3> centerPoint(0,0,0); //origin

cube.addGeometry(centerPoint)





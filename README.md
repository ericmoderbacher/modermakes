Eric Moderbacher's
# Lua-Aided-Design

Draft physical objects in C++ or at runtime with Lua.

How drafting works:

add 1D objects (points) to 1D containers(lines,circles,arcs,spines (and 1D lists/chains of those))

add 1D objects and 2D objects (line segments, circles, arcs, splines (and 1 or 2d lists/chains of those)) to 2D containers (planes, surfaces)

add 1D 2D and 3D objects to 3D container spaces (volumes)

| 1D    | 2D                    | 3D |
|-------|-----------------------|----|
| Point | Line Segment          |    |
|       | Arc                   |    |
|       | Curve*                |    |
|       | lists/chains of above |    |
&ast; : not sure which types yet.


|        | 1D    | 2D | 3D |   |
|--------|-------|----|----|---|
| **1D** | point |    |    |   |
| **2D** |       |    |    |   |
| **3D** |       |    |    |   |
|        |       |    |    |   |







## (Target) Features
  - Version Controllable
  - Headlessness has priority
    - A view port could be added as a debugging and validation tool
  - Parametric (obviously)
  - pythonless... python has too many issues for me to love.
  - There will be NO new filetypes only .lua .cmaketext .c .cpp .csv etc...
  - ci/cd friendly

## Build Notes
- If you are building in macOS like i am then you will need to comment out the "enable Linux goodies" (line 72) block of its makefile

## Warning - this is going to be weird for a while.
- Until/if this projects gets some traction im going to be using it as a place to test out ideas.  For example im trying to use unsigned 64 bit integers for all geometry... the idea being that it might mean that i wont have to deal with floating point errors.








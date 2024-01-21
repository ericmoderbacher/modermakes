# Lua-Aided-Design
An Open Source Appliance Foundation Project, that lets users draft physical objects in lua.







**Do we need a new CAD program?**
  - The best CAD programs are paid and their free tiers change policies often.
    - Their Version Control is built into the application reducing the compatibility with the version control systems we use.
  - I have not enjoyed using freecad, tinkercad or openscad, sorry.



**But why Lua?** Yeah I know there are already quite a few CAD options out there... LAD does have some reasons to exist and they are:

- **Lua is a great language for non-programmers**.
  - The entire language fits into a relatively small book.
  - Its designed so that you don't have to teach the user computer science to use it.
    - numbers do not need casting
    - users don't have to understand why we start counting at 0
    - users only have to learn one data structure
- **But it allows us

- **It is small no matter how you measure**
  - The entire language fits into a relatively small book. (echo?)
  - Can run in a microcontroller
  - lets c/c++ do the heavy lifting
  
- **Very Mature**
  - Lua is 28 years old
  - Lua is used in many AAA games

## (Target) Features
  - Free and Open Source 
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








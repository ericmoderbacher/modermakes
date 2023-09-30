
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



How do i establish things like origins and axis?
I think the origin might not be super useful to me in the traditional sense.

I think that axis will be used, but more for determining plumness or defining other parts.

how are angles going to work?  Angles are typically floating point so there might not be too much of an analog here, right?  Well technically angles can trainslate to rise over run so i guess if i used that concept i could still define angles without sub integer precision








other ideas:
every geometry object uses a pointer that it moves between lists of constrained and unconstrained geometries

when an object gets created it immediately exists in the unconstrained list and it only moves out when it has met constrain rules












psudo code example:

lad::part cube;
cube.addConstraint(numberOfDimentions(3));
lad::point<3> centerPoint(0,0,0); //origin

cube.addGeometry(centerPoint)


more thoughts:

every time something gets added outside of the current bounding box the entire geometry has to be reset and the integer distances have to be reset.
this could be delt with by having the user set an "approximate max bounding box" at the beginning.


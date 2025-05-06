To make my own cad in general I need a graphics pipeline which I have never written from scratch so I think I will use an existing one.

Reality kit seems to be a good option.

Apple Developer page for reality kit

My biggest issue with this is that its swift first, so if I want to use c++ (which I do) I need to have interoperability.

[swift.org's c++ interop page](https://www.swift.org/documentation/cxx-interop/)



c++ 23 concepts are probably a language feature i want to use.

it seems to me that some users are going to have different requirements out of the types uses to represent the geometry features they are designing.



# planck length
Planck length from wiki: https://en.wikipedia.org/wiki/Planck_units#Planck_length
The Planck length, denoted ℓP, is a unit of length defined as:
ℓ
P
=
ℏ
G
c
3
{\displaystyle \ell _{\mathrm {P} }={\sqrt {\frac {\hbar G}{c^{3}}}}}
It is equal to 1.616255(18)×10−35 m[7] (the two digits enclosed by parentheses are the estimated standard error associated with the reported numerical value) or about 10−20 times the diameter of a proton.[31] It can be motivated in various ways, such as considering a particle whose reduced Compton wavelength is comparable to its Schwarzschild radius,[31][32][33] though whether those concepts are in fact simultaneously applicable is open to debate.[34] (The same heuristic argument simultaneously motivates the Planck mass.[32])
The Planck length is a distance scale of interest in speculations about quantum gravity. The Bekenstein–Hawking entropy of a black hole is one-fourth the area of its event horizon in units of Planck length squared.[11]: 370  Since the 1950s, it has been conjectured that quantum fluctuations of the spacetime metric might make the familiar notion of distance inapplicable below the Planck length.[35][36][37] This is sometimes expressed by saying that "spacetime becomes a foam at the Planck scale".[38] It is possible that the Planck length is the shortest physically measurable distance, since any attempt to investigate the possible existence of shorter distances, by performing higher-energy collisions, would result in black hole production. Higher-energy collisions, rather than splitting matter into finer pieces, would simply produce bigger black holes.[39]
The strings of string theory are modeled to be on the order of the Planck length.[40][41] In theories with large extra dimensions, the Planck length calculated from the observed value of
G
{\displaystyle G} can be smaller than the true, fundamental Planck length.[11]: 61 [42]



so here are some lengths in planck lengths:

| Real world distance               | size in Planck lengths   | mm             | inch           | Light years         | number of bits needed |
|-----------------------------------|--------------------------|----------------|----------------|---------------------|-----------------------|
| smallest possible length          | 1                        | 1.62×10⁻³²     | 6.36×10⁻³⁴     | 1.71×10⁻⁵¹         | 0                     |
| neutrino                          | 7.66×10²⁹               | 0.01239        | 4.87×10⁻⁴     | 1.31×10⁻²¹         | ~100                  |
| electron                          | 1.75×10²⁰               | 2.82×10⁻¹²     | 1.11×10⁻¹³     | 2.98×10⁻³¹         | ~68                   |
| proton                            | 1.05×10²⁰               | 1.70×10⁻¹²     | 6.69×10⁻¹⁴     | 1.80×10⁻³¹         | ~67                   |
| neutron                           | 1.11×10²⁰               | 1.80×10⁻¹²     | 7.09×10⁻¹⁴     | 1.90×10⁻³¹         | ~67                   |
| hydrogen atom w/ electron orbital | 6.19×10²⁴               | 1.00×10⁻⁷     | 3.94×10⁻⁹     | 1.06×10⁻²⁶         | ~83                   |
| water molecule                    | 1.86×10²⁵               | 3.00×10⁻⁷     | 1.18×10⁻⁸     | 3.17×10⁻²⁶         | ~84                   |
| micron                            | 6.19×10²⁸               | 1.00×10⁻³     | 3.94×10⁻⁵     | 1.06×10⁻²²         | ~96                   |
| thou (0.001 inch)                 | 1.57×10³⁰               | 0.0254         | 0.00100       | 2.68×10⁻²¹         | ~101                  |
| width of human hair               | 4.33×10³⁰               | 0.0700         | 0.00276       | 7.40×10⁻²¹         | ~102                  |
| thickness of soda can             | 1.86×10³¹               | 0.300          | 0.01181       | 3.17×10⁻²⁰         | ~104                  |
| mm                                | 6.19×10³¹               | 1.000          | 0.03937       | 1.06×10⁻¹⁹         | ~106                  |
| 1/16th inch                       | 9.83×10³¹               | 1.5875         | 0.06250       | 1.68×10⁻¹⁹         | ~107                  |
| cm                                | 6.19×10³²               | 10.00          | 0.39370       | 1.06×10⁻¹⁸         | ~109                  |
| inch                              | 1.57×10³³               | 25.40          | 1.0000        | 2.69×10⁻¹⁸         | ~111                  |
| yard                              | 5.66×10³⁴               | 914.4          | 36.000        | 9.67×10⁻¹⁷         | ~116                  |
| meter                             | 6.19×10³⁴               | 1000.0         | 39.37         | 1.06×10⁻¹⁶         | ~116                  |
| football field (100 yd)           | 5.66×10³⁶               | 9.144×10⁴      | 3600          | 9.67×10⁻¹⁵         | ~122                  |
| soccer pitch (105 m)              | 6.50×10³⁶               | 1.05×10⁵       | 4137          | 1.11×10⁻¹⁴         | ~123                  |
| KM                                | 6.19×10³⁷               | 1.00×10⁶       | 3.94×10⁴      | 1.06×10⁻¹³         | ~126                  |
| mile                              | 9.96×10³⁷               | 1.609×10⁶      | 63360         | 1.70×10⁻¹³         | ~127                  |
| dia of earth                      | 7.88×10⁴¹               | 1.274×10¹⁰     | 5.01×10⁸      | 1.35×10⁻⁹          | ~140                  |
| dia of sun                        | 8.62×10⁴³               | 1.393×10¹²     | 5.48×10¹⁰     | 1.47×10⁻⁷          | ~146                  |
| orbit width of moon               | 4.76×10⁴³               | 7.688×10¹¹     | 3.03×10¹⁰     | 8.13×10⁻⁸          | ~145                  |
| orbit width of earth              | 1.85×10⁴⁶               | 2.992×10¹⁴     | 1.18×10¹³     | 3.16×10⁻⁵          | ~154                  |
| width of solar system             | 5.86×10⁵⁰               | 9.461×10¹⁸     | 3.73×10¹⁷     | 1.00                | ~169                  |
| light year                        | 5.86×10⁵⁰               | 9.461×10¹⁸     | 3.73×10¹⁷     | 1.00                | ~169                  |
| dia of milky way                  | 5.86×10⁵⁵               | 9.461×10²³     | 3.73×10²²     | 1.0×10⁵            | ~186                  |
| distance to Andromeda             | 1.49×10⁵⁷               | 2.402×10²⁵     | 9.45×10²³     | 2.54×10⁶           | ~190                  |
| width of universe                 | 5.45×10⁶¹               | 8.80×10²⁹     | 3.46×10²⁸     | 9.30×10¹⁰          | ~205                  |



so it seems that only 4 64bit ints would be all it would take to be all the resolution we would ever need out of integers.

So i think it is reasonable to be done with floats, they just dont help that much.


and maybe for simple designs we could just design it at the scale of 64bits of planck lengths right?  then at the end scale it up when making the stl files


# Possible way of dealing with arcs:

for a 2D drawing on a surface with only straight lights you could use 3 points in list of points all at the same point to say: the line terminates at this point and then turns.

so everything is a spline basically




sig Test {}

abstract sig Test2 {}

var abstract one sig A,B, C { }

sig A extends B {}
sig A in B {}
sig A in B + C + D {}

sig A {
    asdf: univ,
    fdas: none,
}

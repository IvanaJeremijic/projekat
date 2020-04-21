#ifndef RESTORAN_HPP_INCLUDED
#define RESTORAN_HPP_INCLUDED
#include "meni.hpp"

enum Italijanska {ri1, ri2, ri3};
enum Kineska {rk1, rk2, rk3};
enum Srpska {rs1, rs2, rs3};
enum Francuska {rf1, rf2, rf3};
enum Meksicka {rmk1, rmk2, rmk3};
enum Tajlandska {rt1, rt2, rt3};
enum Mediteranska {rmd1, rmd2, mrd3};
enum Rostilj {rr1, rr2, rr3};

class Restoran
{
private:
    int ocena;
    Italijanska ri;
    Kineska rk;
    Srpska rs;
    Francuska rf;
    Meksicka rmk;
    Tajlandska rt;
    Mediteranska rmd;
    Rostilj rr;
    Meni m;
};

#endif // RESTORAN_HPP_INCLUDED

#ifndef MENI_HPP_INCLUDED
#define MENI_HPP_INCLUDED
#include "jelo.hpp"
#include "pice.hpp"

enum VrstaObroka {dorucak, rucak, vecera, uzina, dezert, brunch};

class Meni
{
private:
    VrstaObroka vrsta;
    Jelo j;
    Pice p;
};

#endif // MENI_HPP_INCLUDED

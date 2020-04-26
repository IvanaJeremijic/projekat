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
public:
    Meni(int idj, bool veg, string imej, int cenaj, int idp, string imep, int cenap, VrstaObroka v): j(idj, veg, imej, cenaj), p(idp, imep, cenap), vrsta(v){}
    Meni(): j(-1, true, "jelo", 1), p(0, "pice", 2), vrsta(dorucak){}
};

#endif // MENI_HPP_INCLUDED

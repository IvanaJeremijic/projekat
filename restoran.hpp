#ifndef RESTORAN_HPP_INCLUDED
#define RESTORAN_HPP_INCLUDED
#include "meni.hpp"
#include "vrsta_kuhinje.hpp"

class Restoran
{
private:
    int ocena;
    Meni m;
    Vrsta_kuhinje vrsta[8];
public:
    Restoran(int idj, bool veg, string imej, int cenaj, int idp, string imep, int cenap, VrstaObroka v, int o): m(idj, veg, imej, cenaj, idp, imep, cenap, v){}

};

#endif // RESTORAN_HPP_INCLUDED

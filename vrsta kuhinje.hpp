#ifndef VRSTA_KUHINJE_HPP_INCLUDED
#define VRSTA_KUHINJE_HPP_INCLUDED
#include "restoran.hpp"

enum Kuhinje{italijanska, kineska, srpska, francuska, meksicka, tajlandska, mediteranska, rostilj};

class Vrsta kuhinje
{
private:
    Kuhinje kuhinja;
    Restoran r;
};

#endif // VRSTA_KUHINJE_HPP_INCLUDED

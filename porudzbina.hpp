#ifndef PORUDZBINA_HPP_INCLUDED
#define PORUDZBINA_HPP_INCLUDED
#include "restoran.hpp"
#include "meni.hpp"

enum BrzinaDostave {pice, jelo, obrok};

class Porudzbina
{
private:
    int cena;
    BrzinaDostave brzina;
    Restoran r;
    Meni m;
};

#endif // PORUDZBINA_HPP_INCLUDED

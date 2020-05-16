#ifndef PORUDZBINA_HPP_INCLUDED
#define PORUDZBINA_HPP_INCLUDED
#include "artikal.hpp"


class Porudzbina
{
private:
    int cena;
    vector <Artikal> a;
public:
    Porudzbina(int c)
    {
        cena=c;
    }
};

#endif // PORUDZBINA_HPP_INCLUDED

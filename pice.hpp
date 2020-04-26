#ifndef PICE_HPP_INCLUDED
#define PICE_HPP_INCLUDED
#include "artikal.hpp"

class Pice: public Artikal
{
private:
    string imePica;
    int cenaPica;
public:
    Pice(int id, string ime, int cena): Artikal(id), imePica(ime), cenaPica(cena){}
    Pice(): Artikal(0), imePica("ime"), cenaPica(1){}
};

#endif // PICE_HPP_INCLUDED

#ifndef JELO_HPP_INCLUDED
#define JELO_HPP_INCLUDED
#include "artikal.hpp"

class Jelo: public Artikal
{
private:
    bool vegeterijanska;
    string imeJela;
    int cenaJela;
public:
    Jelo(int id, bool veg, string ime, int cena): Artikal(id), vegeterijanska(veg), imeJela(ime), cenaJela(cena){}
    Jelo(): Artikal(1), imeJela("ime"), cenaJela(2){}
};

#endif // JELO_HPP_INCLUDED

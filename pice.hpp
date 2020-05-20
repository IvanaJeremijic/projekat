#ifndef PICE_HPP_INCLUDED
#define PICE_HPP_INCLUDED
#include "artikal.hpp"

class Pice: public Artikal
{
private:
    string imePica;
    int cenaPica;
public:
    string getIme() const
    {
        return imePica;
    }
    int getCena() const
    {
        return cenaPica;
    }
    Pice(int id, string ime, int cena): Artikal(id), imePica(ime), cenaPica(cena) {}
    Pice(): Artikal(0), imePica("ime"), cenaPica(1) {}

    void ispis()
    {
        cout<<imePica<<" - "<<cenaPica;
    }
};

#endif // PICE_HPP_INCLUDED

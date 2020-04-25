#ifndef KORISNIK_HPP_INCLUDED
#define KORISNIK_HPP_INCLUDED
#include "adresa.hpp"

class Korisnik: public Adresa
{
private:
    string ime;
    string prezime;
    int brojTelefona;
};

#endif // KORISNIK_HPP_INCLUDED

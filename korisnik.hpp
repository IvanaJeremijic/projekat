#ifndef KORISNIK_HPP_INCLUDED
#define KORISNIK_HPP_INCLUDED
#include "adresa.hpp"

class Korisnik
{
private:
    char ime[10];
    char prezime[20];
    int brojTelefona;
    Adresa a;
};

#endif // KORISNIK_HPP_INCLUDED

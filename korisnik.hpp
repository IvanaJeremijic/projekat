#ifndef KORISNIK_HPP_INCLUDED
#define KORISNIK_HPP_INCLUDED
#include "adresa.hpp"

class Korisnik: public Adresa
{
private:
    string ime;
    string prezime;
    int brojTelefona;
public:
    Korisnik(string ulica, int br, string grad, string i, string p, int brt): Adresa(ulica, br, grad), ime(i), prezime(p), brojTelefona(brt){}

};

#endif // KORISNIK_HPP_INCLUDED

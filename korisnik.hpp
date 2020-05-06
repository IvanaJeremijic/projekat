#ifndef KORISNIK_HPP_INCLUDED
#define KORISNIK_HPP_INCLUDED
#include "adresa.hpp"

class Korisnik
{
private:
    string ime;
    string prezime;
    int brojTelefona;
    int id;
    Adresa a;
public:
    Korisnik(string ulica, int br, string grad, string i, string p, int brt): a(ulica, br, grad), ime(i), prezime(p), brojTelefona(brt) {}

    void unos()
    {
        cout<<"Unesite svoje podatke:"<<endl;
        cout<<"ime:"<<endl;
        cin>>ime;
        cout<<"prezime:"<<endl;
        cin>>prezime;
        cout<<"broj telefona:"<<endl;
        cin>>brojTelefona;
        cout<<"ime ulice:"<<endl;
        a.setUlica();
        cout<<"broj kuce:"<<endl;
        a.setBroj();
        cout<<"ime grada:"<<endl;
        a.setGrad();
    }
};

#endif // KORISNIK_HPP_INCLUDED

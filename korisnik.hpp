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

    void unos(){
        cout<<"Unesite svoje podatke:"<<endl;
        cout<<"ime:"<<endl;
        cin>>ime;
        cout<<"prezime:"<<endl;
        cin>>prezime;
        cout<<"broj telefona:"<<endl;
        cin>>brojTelefona;
        cout<<"ime ulice:"<<endl;
        cin>>imeUlice;
        cout<<"broj kuce:"<<endl;
        cin>>broj;
        cout<<"ime grada:"<<endl;
        cin>>imeGrada;
    }
};

#endif // KORISNIK_HPP_INCLUDED

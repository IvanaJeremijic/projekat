#ifndef PORUDZBINA_HPP_INCLUDED
#define PORUDZBINA_HPP_INCLUDED
#include "artikal.hpp"
#include "meni.hpp"

class Porudzbina
{
private:
    int cena;
    vector <Artikal> artikli;
    Meni m;
    int j;
    int p;
public:
    Porudzbina(int c)
    {
        cena=c;
    }

    Porudzbina()
    {
        cena=6;
    }

    vector <Artikal> getA(){return artikli;}

    void idj(string jelo){
        j=m.pretragaJelaID(jelo);
    }

    void idp(string pice){
        p=m.pretragaPicaID(pice);
    }

    void unos(){
        Artikal a1(j);
        artikli.push_back (a1);
        Artikal a2(p);
        artikli.push_back (a2);
    }

};

#endif // PORUDZBINA_HPP_INCLUDED

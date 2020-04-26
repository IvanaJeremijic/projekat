#ifndef ADRESA_HPP_INCLUDED
#define ADRESA_HPP_INCLUDED

class Adresa
{
protected:
    string imeUlice;
    int broj;
    string imeGrada;
public:
    Adresa(string ulica, int br, string grad){
        imeUlice=ulica;
        broj=br;
        imeGrada=grad;
    }
};

#endif // ADRESA_HPP_INCLUDED

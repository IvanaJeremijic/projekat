#include <iostream>

using namespace std;
#include "korisnik.hpp"
#include "adresa.hpp"
#include "vrsta_kuhinje.hpp"
#include "restoran.hpp"
#include "meni.hpp"
#include "jelo.hpp"
#include "pice.hpp"
#include "artikal.hpp"
#include "porudzbina.hpp"
#include "reklame.hpp"

ostream& operator<<(ostream& out, const Vrsta_kuhinje& v)
{
    out<<"Vrsta kuhinje:";
    if(v.getK()==0){
        out<<"italijanska";
    }
    else if(v.getK()==0){
        out<<"kineska";
    }
    else if(v.getK()==0){
        out<<"odmaca";
    }
    else if(v.getK()==0){
        out<<"brza hrana";
    }
    out<<endl;
    out<<"opis:"<<v.getO();
    return out;
}

ostream& operator<<(ostream& out, const Korisnik& k)
{
    out<<"ime:"<<k.getIme()<<endl;
    out<<"prezime:"<<k.getPrezime()<<endl;
    out<<"broj telefona:"<<k.getBrTel()<<endl;
    out<<"id:"<<k.getId()<<endl;
    out<<k.getAdresa()<<endl;
    return out;
}

ostream& operator<<(ostream& out, const Adresa& a)
{
    out<<"ime ulice:"<<a.getUlica()<<endl;
    out<<"broj kuce:"<<a.getBroj()<<endl;
    out<<"ime grada:"<<a.getGrad();
    return out;
}

ostream& operator<<(ostream& out, const Reklame& r)
{
    out<<"REKLAMA"<<endl;
    out<<r.getNaziv();
    return out;
}

int Korisnik::broj=0;

//porucivanje hrane: unos podataka korisnika, odabir vrste kuhinje, zatim jela i pica i na kraju sumiranje cele porudzbine

int main()
{
    cout<<"Ulogovalo se: "<<Korisnik::getStatickiBroj()<<" korisnika"<<endl;
    Korisnik k;
    //k.unos();
    //cout<<endl<<endl;
    //Meni m;
    //m.citajFajl("MENI.txt");
    Vrsta_kuhinje v;
    cout<<v;
    cout<<endl<<endl;
    cout<<k;
    cout<<endl<<endl;
    Reklame r;
    cout<<r;
    cout<<endl<<endl;
    cout<<"Ulogovalo se: "<<k.getBroj()<<" korisnika"<<endl;
    return 0;
}

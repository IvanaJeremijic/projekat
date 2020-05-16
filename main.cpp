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
    if(v.getK()==0){
        out<<"italijanska";
    }
    else if(v.getK()==1){
        out<<"kineska";
    }
    else if(v.getK()==2){
        out<<"domaca";
    }
    else if(v.getK()==3){
        out<<"brza hrana";
    }
    out<<endl;
    out<<"\t\t"<<v.getO();
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
    cout<<"\t\t\t Dobrodosli!!!"<<endl;
    cout<<"\t\t\t_______________";
    cout<<endl<<endl;
    //cout<<"Ulogovalo se: "<<Korisnik::getStatickiBroj()<<" korisnika"<<endl;
    Korisnik k;
    k.unos();
    cout<<endl;
    cout<<"_______________________________________";
    cout<<endl<<endl;
    //Meni m;
    //m.citajFajl("MENI.txt");
    //Vrsta_kuhinje v;
    //cout<<v;
    //cout<<endl<<endl;
    //cout<<k;
    //cout<<endl<<endl;
    Reklame reklama1;
    cout<<reklama1<<endl;
    cout<<"_______________________________________";
    cout<<endl<<endl;
    //cout<<"Ulogovalo se: "<<k.getBroj()<<" korisnika"<<endl;
    Restoran r;
    r.vrsteKuhinje();
    int vrsta;
    bool v;
    do{
        r.porucivanje();
        cin>>vrsta;
        if(vrsta==1){
            cout<<"odabrali ste italijansku kuhinju."<<endl;
        }
        else if(vrsta==2){
            cout<<"odabrali ste kinesku kuhinju."<<endl;
        }
        else if(vrsta==3){
            cout<<"odabrali ste domacu kuhinju."<<endl;
        }
        else if(vrsta==4){
            cout<<"odabrali ste brzu hranu."<<endl;
        }
        cout<<"Da li ste zadovoljni odabirom vrste kuhinje?"<<endl<<"da(1)"<<endl<<"ne(0)"<<endl;
        cin>>v;
        cout<<"_______________________________________";
        cout<<endl<<endl;
    }while(v==0);
    Reklame reklama2;
    cout<<reklama2<<endl;
    cout<<"_______________________________________";
    cout<<endl<<endl;
    //Jelo j;
    //j.ispis();
    //Pice p;
    //p.ispis();
    return 0;
}

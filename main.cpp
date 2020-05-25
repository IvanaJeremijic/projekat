#include <iostream>
#include <vector>

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
    if(v.getK()==0)
    {
        out<<"italijanska";
    }
    else if(v.getK()==1)
    {
        out<<"kineska";
    }
    else if(v.getK()==2)
    {
        out<<"domaca";
    }
    else if(v.getK()==3)
    {
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
    out<<r.getNaziv()<<endl;
    out<<r.getOpis();
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

    Meni m;
    m.unosJela();
    m.unosPica();

    bool jj;
    bool pp=1;
    string jelo;
    string pice;

    cout<<"Zelite li da narucite jelo?"<<endl<<"da(1)"<<endl<<"ne(0)"<<endl;
    cin>>jj;
    cout<<"_______________________________________";
    cout<<endl<<endl;

    if(jj==1)
    {
        do
        {
            r.porucivanje();
            cin>>vrsta;

            if(vrsta==1)
            {
                cout<<"odabrali ste italijansku kuhinju."<<endl;
            }
            else if(vrsta==2)
            {
                cout<<"odabrali ste kinesku kuhinju."<<endl;
            }
            else if(vrsta==3)
            {
                cout<<"odabrali ste domacu kuhinju."<<endl;
            }
            else if(vrsta==4)
            {
                cout<<"odabrali ste brzu hranu."<<endl;
            }
            else if(vrsta>4)
            {
                cout<<"Broj koji ste uneli nije odgovarajuc."<<endl;
                v=0;
                continue;
            }

            cout<<"_______________________________________";
            cout<<endl<<endl;

            cout<<"Da li ste zadovoljni odabirom vrste kuhinje?"<<endl<<"da(1)"<<endl<<"ne(0)"<<endl;
            cin>>v;
            cout<<"_______________________________________";
            cout<<endl<<endl;
        }
        while(v==0);

        Reklame reklama2;
        cout<<reklama2<<endl;
        cout<<"_______________________________________";
        cout<<endl<<endl;
        do
        {
            cout<<"Izaberite jelo:"<<endl;

            if(vrsta==1)
            {
                cout<<"\t";
                m.pretragaJela("jelo1");
                cout<<endl;

                cout<<"\t";
                m.pretragaJela("jelo5");
                cout<<endl;

                cout<<"\t";
                m.pretragaJela("jelo7");
                cout<<endl;
            }
            else if(vrsta==2)
            {
                cout<<"\t";
                m.pretragaJela("jelo2");
                cout<<endl;

                cout<<"\t";
                m.pretragaJela("jelo4");
                cout<<endl;
            }
            else if(vrsta==3)
            {
                cout<<"\t";
                m.pretragaJela("jelo3");
                cout<<endl;

                cout<<"\t";
                m.pretragaJela("jelo7");
                cout<<endl;

                cout<<"\t";
                m.pretragaJela("jelo6");
                cout<<endl;
            }
            else if(vrsta==4)
            {
                cout<<"\t";
                m.pretragaJela("jelo2");
                cout<<endl;

                cout<<"\t";
                m.pretragaJela("jelo5");
                cout<<endl;
            }

            cin>>jelo;

            cout<<"_______________________________________";
            cout<<endl<<endl;

            cout<<"Da li ste zadovoljni odabirom jela?"<<endl<<"da(1)"<<endl<<"ne(0)"<<endl;
            cin>>v;
            cout<<"_______________________________________";
            cout<<endl<<endl;
        }
        while(v==0);

        Reklame reklama3;
        cout<<reklama3<<endl;
        cout<<"_______________________________________";
        cout<<endl<<endl;

        cout<<"Zelite li da narucite pice?"<<endl<<"da(1)"<<endl<<"ne(0)"<<endl;
        cin>>pp;
        cout<<"_______________________________________";
        cout<<endl<<endl;
    }

    if(pp==1)
    {
        do
        {
            cout<<"Izaberite pice:"<<endl;
            cout<<"\t";
            m.pretragaPica("pice1");
            cout<<endl;
            cout<<"\t";
            m.pretragaPica("pice2");
            cout<<endl;
            cout<<"\t";
            m.pretragaPica("pice3");
            cout<<endl;
            cout<<"\t";
            m.pretragaPica("pice4");
            cout<<endl;
            cout<<"\t";
            m.pretragaPica("pice5");
            cout<<endl;
            cout<<"\t";
            m.pretragaPica("pice6");
            cout<<endl;
            cout<<"\t";
            m.pretragaPica("pice7");
            cout<<endl;

            cin>>pice;

            cout<<"_______________________________________";
            cout<<endl<<endl;

            cout<<"Da li ste zadovoljni odabirom pica?"<<endl<<"da(1)"<<endl<<"ne(0)"<<endl;
            cin>>v;
            cout<<"_______________________________________";
            cout<<endl<<endl;
        }
        while(v==0);
    }

    if(pp==0)
    {
        cout<<"_______________________________________";
        cout<<endl<<endl;
    }

    Reklame reklama4;
    cout<<reklama4<<endl;
    cout<<"_______________________________________";
    cout<<endl<<endl;

    Porudzbina ppp;
    int idj,idp;
    idj=m.pretragaJelaID(jelo);
    idp=m.pretragaPicaID(pice);
    ppp.unos(idj,idp);

    int cj, cp, c;
    cj=m.pretragaJelaCena(jelo);
    cp=m.pretragaPicaCena(pice);
    c=ppp.cenaf(cj,cp);

    ppp.unosFajla();
    //ppp.citajFajl();

    cout<<"Vasa porudzbina:"<<endl;
    cout<<jelo<<", "<<pice<<endl;
    cout<<"cena: "<<c<<endl;


    //Jelo j;
    //j.ispis();
    //Pice p;
    //p.ispis();
    return 0;
}

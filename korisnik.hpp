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
    static int broj;
public:
    Korisnik(string ulica, int br, string grad, string i, string p, int brt): a(ulica, br, grad), ime(i), prezime(p), brojTelefona(brt) {broj++;}
    Korisnik(): a("ime ulice", 8, "ime grada"), ime("ime"), prezime("prezime"), brojTelefona(6) {broj++;}

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
    string getIme()const
    {
        return ime;
    }
    string getPrezime()const
    {
        return prezime;
    }
    int getBrTel()const
    {
        return brojTelefona;
    }
    int getId()const
    {
        return id;
    }
    Adresa getAdresa()const
    {
        return a;
    }

    friend ostream& operator<<(ostream& out, const Korisnik& k);

    int getBroj(){
        return broj;
    }
    static int getStatickiBroj(){
        return broj;
    }

    ~Korisnik(){
        broj--;
    }
};

#endif // KORISNIK_HPP_INCLUDED

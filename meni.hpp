#ifndef MENI_HPP_INCLUDED
#define MENI_HPP_INCLUDED
#include <fstream>
#include "jelo.hpp"
#include "pice.hpp"
#include <vector>

void citajTxt(string nazivFajla)
{
    string linija;
    ifstream fajl (nazivFajla);
    if (fajl.is_open())
    {
        while ( getline (fajl,linija) )
        {
            cout << linija << '\n';
        }
        fajl.close();
    }



    else
        cout << "Neuspesno otvoren fajl";



}

class Meni
{
private:
    vector <Jelo> jela;
    vector <Pice> pica;
public:
    Meni() {}
    vector <Jelo> getJ() const
    {
        return jela;
    }
    vector <Pice> getP() const
    {
        return pica;
    }
    void unosJela()
    {
        Jelo j1(1, true, "jelo1", 250);
        jela.push_back (j1);
        Jelo j2(2, true, "jelo2", 200);
        jela.push_back (j2);
        Jelo j3(3, true, "jelo3", 350);
        jela.push_back (j3);
        Jelo j4(4, true, "jelo4", 500);
        jela.push_back (j4);
        Jelo j5(5, true, "jelo5", 650);
        jela.push_back (j5);
        Jelo j6(6, true, "jelo6", 200);
        jela.push_back (j6);
        Jelo j7(7, true, "jelo7", 250);
        jela.push_back (j7);
    }

    void unosPica()
    {
        Pice p1(1, "pice1", 60);
        pica.push_back(p1);
        Pice p2(2, "pice2", 35);
        pica.push_back(p2);
        Pice p3(3, "pice3", 200);
        pica.push_back(p3);
        Pice p4(4, "pice4", 90);
        pica.push_back(p4);
        Pice p5(5, "pice5", 60);
        pica.push_back(p5);
        Pice p6(6, "pice6", 100);
        pica.push_back(p6);
        Pice p7(7, "pice7", 150);
        pica.push_back(p7);
    }

    void citajFajl(string nazivFajla)
    {
        cout<<"Meni: "<<endl;
        citajTxt(nazivFajla);
        cout<<endl<<endl;
    }

    void pretragaJela(string jelo){
        bool pronadjen=false;
        for(auto it=jela.begin(); it<jela.end(); it++){
            if(jelo==(it)->getI()){
                (it)->ispis();
                pronadjen=true;
            }
        }
        if(!pronadjen){
            cout<<"takvo jelo ne postoji"<<endl;
        }
    }
    void pretragaPica(string pice){
        bool pronadjen=false;
        for(auto it=pica.begin(); it<pica.end(); it++){
            if(pice==(it)->getIme()){
                (it)->ispis();
                pronadjen=true;
            }
        }
        if(!pronadjen){
            cout<<"takvo pice ne postoji"<<endl;
        }
    }
};

#endif // MENI_HPP_INCLUDED

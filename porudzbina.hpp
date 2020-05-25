#ifndef PORUDZBINA_HPP_INCLUDED
#define PORUDZBINA_HPP_INCLUDED
#include "artikal.hpp"
#include "meni.hpp"
#include <vector>


void pisiTxt(string nazivFajla, string tekst1, char mode='w')
{
    ofstream fajl;
    if (mode=='a')
    {
        fajl.open (nazivFajla, ios_base::app);
    }
    else
    {
        fajl.open (nazivFajla);
    }
    fajl<<tekst1<<endl;
    fajl.close();

}

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

class Porudzbina
{
private:
    int cena=0;
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

    vector <Artikal> getA()
    {
        return artikli;
    }

    void unos(int j, int p)
    {
        Artikal a1(j);
        artikli.push_back (a1);
        Artikal a2(p);
        artikli.push_back (a2);
    }

    int cenaf(int j, int p){
        cena=j+p;
        return cena;
    }

    void unosFajla()
    {
        string ulaz;
        for(auto it=artikli.begin(); it<artikli.end(); it++)
        {
            ulaz=to_string(it->getID());
            pisiTxt("PORUDZBINA.txt", ulaz, 'a');
        }
    }

    void citajFajl()
    {
        cout<<"Vasa porudzbina: "<<endl;
        citajTxt("PORUDZBINA.txt");
        cout<<endl<<endl;
    }

};

#endif // PORUDZBINA_HPP_INCLUDED

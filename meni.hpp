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
        Pice p1(1, "pice1", 250);
        pica.push_back(p1);
        Pice p2(2, "pice2", 200);
        pica.push_back(p2);
        Pice p3(3, "pice3", 350);
        pica.push_back(p3);
        Pice p4(4, "pice4", 500);
        pica.push_back(p4);
        Pice p5(5, "pice5", 650);
        pica.push_back(p5);
        Pice p6(6, "pice6", 200);
        pica.push_back(p6);
        Pice p7(7, "pice7", 250);
        pica.push_back(p7);
    }

    void citajFajl(string nazivFajla)
    {
        cout<<"Meni: "<<endl;
        citajTxt(nazivFajla);
        cout<<endl<<endl;
    }


};

#endif // MENI_HPP_INCLUDED

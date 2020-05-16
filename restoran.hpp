#ifndef RESTORAN_HPP_INCLUDED
#define RESTORAN_HPP_INCLUDED
#include "meni.hpp"
#include "vrsta_kuhinje.hpp"
#include <vector>

class Restoran
{
private:
    Meni m;
    vector <Vrsta_kuhinje> v;
public:
    Restoran(){}
    void vrsteKuhinje()
    {
        Vrsta_kuhinje v1(italijanska, "italijanska");
        v.push_back(v1);
        Vrsta_kuhinje v2(kineska, "kineska");
        v.push_back(v2);
        Vrsta_kuhinje v3(domaca, "domaca");
        v.push_back(v3);
        Vrsta_kuhinje v4(brzaHrana, "brza hrana");
        v.push_back(v4);
    }

    void porucivanje()
    {
        cout<<"Izaberite vrstu kuhinje:"<<endl;
        for(auto it=v.begin(); it<v.end(); it++){
            cout<<*it<<endl<<endl;
        }
    }

};
#endif // RESTORAN_HPP_INCLUDED

#ifndef RESTORAN_HPP_INCLUDED
#define RESTORAN_HPP_INCLUDED
#include "meni.hpp"
#include "vrsta_kuhinje.hpp"

ostream& operator<<(ostream& out, const Vrsta_kuhinje& v){
        out<<v.getK()<<endl;
        out<<v.getO()<<endl;
        return out;
}
ostream& operator<<(ostream& out, const Jelo& j){
        out<<j.getI()<<endl;
        out<<j.getC()<<endl;
        out<<j.getVeg()<<endl;
        return out;
}
ostream& operator<<(ostream& out, const Pice& p){
        out<<p.getIme()<<endl;
        out<<p.getCena()<<endl;
        return out;
}
ostream& operator<<(ostream& out, const Meni& m){
    out<<m.getJ()<<endl;
    out<<m.getP()<<endl;
    return out;
}

class Restoran
{
private:
    Meni m;
    Vrsta_kuhinje vrsta[8];
public:

    void vrsteKuhinje(){
        Vrsta_kuhinje v1(italijanska, "italijanska");
        vrsta[0]=v1;
        Vrsta_kuhinje v2(kineska, "kineska");
        vrsta[1]=v2;
        Vrsta_kuhinje v3(domaca, "domaca");
        vrsta[2]=v3;
        Vrsta_kuhinje v4(brzaHrana, "brza hrana");
        vrsta[3]=v4;
    }

    friend ostream& operator<<(ostream& out, const Vrsta_kuhinje& v);
    friend ostream& operator<<(ostream& out, const Jelo& j);
    friend ostream& operator<<(ostream& out, const Pice& p);
    friend ostream& operator<<(ostream& out, const Meni& m);

    void porucivanje(){
        cout<<"Izaberite vrstu kuhinje:"<<endl;
        for(int i; i<4; i++){
            cout<<i+1<<"."<<vrsta[i]<<endl;
        }
        int broj;
        cin>>broj;
        if(broj==1){

        }
    }

};
#endif // RESTORAN_HPP_INCLUDED

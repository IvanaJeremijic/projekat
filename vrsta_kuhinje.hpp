#ifndef VRSTA_KUHINJE_HPP_INCLUDED
#define VRSTA_KUHINJE_HPP_INCLUDED

enum Kuhinje{italijanska, kineska, srpska, francuska, meksicka, tajlandska, mediteranska, rostilj};

class Vrsta_kuhinje
{
private:
    Kuhinje kuhinja;
    string opis;
public:
    Vrsta_kuhinje(Kuhinje kuh, string op){
        kuhinja=kuh;
        opis=op;
    }
    Vrsta_kuhinje(){
        kuhinja=italijanska;
        opis="ljuto";
    }
};
#endif // VRSTA_KUHINJE_HPP_INCLUDED

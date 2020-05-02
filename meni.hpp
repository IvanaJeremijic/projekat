#ifndef MENI_HPP_INCLUDED
#define MENI_HPP_INCLUDED
#include "jelo.hpp"
#include "pice.hpp"

class Meni
{
private:
    Jelo jela[7];
    Pice pica[7];
public:
    void unosJela(){
        Jelo j1(1, true, "jelo1", 250);
        jela[0]=j1;
        Jelo j2(2, true, "jelo2", 200);
        jela[1]=j2;
        Jelo j3(3, true, "jelo3", 350);
        jela[2]=j3;
        Jelo j4(4, true, "jelo4", 500);
        jela[3]=j4;
        Jelo j5(5, true, "jelo5", 650);
        jela[4]=j5;
        Jelo j6(6, true, "jelo6", 200);
        jela[5]=j6;
        Jelo j7(7, true, "jelo7", 250);
        jela[6]=j7;
    }

    void unosPica(){
        Pice p1(1, "pice1", 250);
        pica[0]=p1;
        Pice p2(2, "pice2", 200);
        pica[1]=p2;
        Pice p3(3, "pice3", 350);
        pica[2]=p3;
        Pice p4(4, "pice4", 500);
        pica[3]=p4;
        Pice p5(5, "pice5", 650);
        pica[4]=p5;
        Pice p6(6, "pice6", 200);
        pica[5]=p6;
        Pice p7(7, "pice7", 250);
        pica[6]=p7;
    }

};

#endif // MENI_HPP_INCLUDED

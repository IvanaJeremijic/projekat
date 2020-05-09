#ifndef VRSTA_KUHINJE_HPP_INCLUDED
#define VRSTA_KUHINJE_HPP_INCLUDED

enum Kuhinje {italijanska, kineska, domaca, brzaHrana};

class Vrsta_kuhinje
{
private:
    Kuhinje kuhinja;
    string opis;
public:
    Vrsta_kuhinje(Kuhinje kuh, string op)
    {
        kuhinja=kuh;
        opis=op;
    }
    Vrsta_kuhinje()
    {
        kuhinja=italijanska;
        opis="ljuto";
    }

    Kuhinje getK()const
    {
        return kuhinja;
    }
    string getO()const
    {
        return opis;
    }

    friend ostream& operator<<(ostream& out, const Vrsta_kuhinje& v);
};
#endif // VRSTA_KUHINJE_HPP_INCLUDED

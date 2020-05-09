#ifndef ADRESA_HPP_INCLUDED
#define ADRESA_HPP_INCLUDED

class Adresa
{
private:
    string imeUlice;
    int broj;
    string imeGrada;
public:
    Adresa(string ulica, int br, string grad)
    {
        imeUlice=ulica;
        broj=br;
        imeGrada=grad;
    }
    void setUlica()
    {
        cin>>imeUlice;
    }
    void setBroj()
    {
        cin>>broj;
    }
    void setGrad()
    {
        cin>>imeGrada;
    }
    string getUlica()const
    {
        return imeUlice;
    }
    int getBroj()const
    {
        return broj;
    }
    string getGrad()const
    {
        return imeGrada;
    }
    friend ostream& operator<<(ostream& out, const Adresa& a);
};

#endif // ADRESA_HPP_INCLUDED

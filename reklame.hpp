#ifndef REKLAME_HPP_INCLUDED
#define REKLAME_HPP_INCLUDED

class Reklame
{
private:
    int cena;
    string nazivProizvoda;
public:
    Reklame(int c, string naziv)
    {
        cena=c;
        nazivProizvoda=naziv;
    }
    Reklame()
    {
        cena=5;
        nazivProizvoda="proizvod";
    }
    int getCena()const
    {
        return cena;
    }
    string getNaziv()const
    {
        return nazivProizvoda;
    }
    friend ostream& operator<<(ostream& out, const Korisnik& k);
};

#endif // REKLAME_HPP_INCLUDED

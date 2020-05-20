#ifndef REKLAME_HPP_INCLUDED
#define REKLAME_HPP_INCLUDED

class Reklame
{
private:
    string opis;
    string nazivProizvoda;
public:
    Reklame(string naziv, string o)
    {
        opis=o;
        nazivProizvoda=naziv;
    }
    Reklame()
    {
        opis="opis";
        nazivProizvoda="proizvod";
    }
    string getOpis()const
    {
        return opis;
    }
    string getNaziv()const
    {
        return nazivProizvoda;
    }
    friend ostream& operator<<(ostream& out, const Korisnik& k);
};

#endif // REKLAME_HPP_INCLUDED

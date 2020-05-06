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
};

#endif // REKLAME_HPP_INCLUDED

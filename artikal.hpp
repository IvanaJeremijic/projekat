#ifndef OBROK_HPP_INCLUDED
#define OBROK_HPP_INCLUDED

class Artikal
{
protected:
    int id;
public:
    Artikal(int idd)
    {
        id=idd;
    }
    Artikal()
    {
        id=0;
    }
    virtual void ispis()=0;
    int getID(){
        return id;
    }
};

#endif // OBROK_HPP_INCLUDED

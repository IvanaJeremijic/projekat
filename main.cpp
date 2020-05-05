#include <iostream>

using namespace std;
#include "korisnik.hpp"
#include "adresa.hpp"
#include "vrsta_kuhinje.hpp"
#include "restoran.hpp"
#include "meni.hpp"
#include "jelo.hpp"
#include "pice.hpp"
#include "artikal.hpp"
#include "porudzbina.hpp"
#include "reklame.hpp"

//porucivanje hrane: unos podataka korisnika, odabir vrste kuhinje, zatim jela i pica i na kraju sumiranje cele porudzbine

int main()
{
    Korisnik k("ulica",1,"grad","ime","prezime",444);
    k.unos();
    cout<<endl<<endl;
    Meni m;
    m.citajFajl("MENI.txt");
    return 0;
}

#include "Televizor.hpp"

int main(){
    Televizor t;
    Televizor t1(t);

    ispis(t);
    ispis(t1);

    t1.ukljuci();
    ispis(t1);
    t1.pojacajZvuk();
    ispis(t1);
    t1.sledeciKanal();
    ispis(t1);
    t1.prethodniKanal();
    ispis(t1);
    t1.pojacajZvuk();
    ispis(t1);
    t1.pokvari();
    ispis(t1);
    t1.popravi();
    ispis(t1);
    t1.ukljuci();
    ispis(t1);
    t1.smanjiZvuk();
    ispis(t1);
    t1.sledeciKanal();
    t1.sledeciKanal();
    t1.sledeciKanal();
    t1.sledeciKanal();
    t1.sledeciKanal();
    t1.sledeciKanal();
    t1.sledeciKanal();
    ispis(t1);
    t1.sledeciKanal();
    ispis(t1);
    return 0;
}
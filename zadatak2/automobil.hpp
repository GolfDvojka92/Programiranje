#pragma once

#include "skoljka.hpp"
#include "menjac.hpp"

enum trenutnoStanje{POKVAREN = 1,UGASEN,UPALJEN};

class Automobil{
    private:
        Menjac M;
        Skoljka S;
        trenutnoStanje t;
        int trenutnaBrzina;
    public:
        Automobil();
        Automobil(int, tipMenjaca, bojaSkoljke, trenutnoStanje, int);
        Automobil(const Automobil &);
        bool upali();
        bool ugasi();
        bool pokvari();
        bool popravi();
        bool povecajBrzinu();
        bool smanjiBrzinu();
        int getBrojBrzina() const;
        string getTip() const;
        string getBoja() const;
        string getTrenutnoStanje() const;
        int getTrenutnaBrzina() const;
};

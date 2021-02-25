#pragma once

#include <iostream>
using namespace std;

enum tipMenjaca{MANUELNI = 1, AUTOMATSKI};

class Menjac {
    private:
        int brojBrzina;
        tipMenjaca tip;
    public:
        Menjac();
        Menjac(int, tipMenjaca);
        Menjac(const Menjac &);
        void setBrojBrzina(int);
        void setTipMenjaca(tipMenjaca);
        int getBrojBrzina() const;
        string getTipMenjaca() const;
};

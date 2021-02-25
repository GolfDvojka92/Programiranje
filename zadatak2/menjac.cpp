#include "menjac.hpp"

Menjac::Menjac(){
    brojBrzina = 3;
    tip = MANUELNI;
}

Menjac::Menjac(int bb, tipMenjaca t){
    brojBrzina = bb;
    tip = t;
}

Menjac::Menjac(const Menjac &m){
    brojBrzina = m.brojBrzina;
    tip = m.tip;
}

void Menjac::setBrojBrzina(int bb){
    brojBrzina = bb;
}

void Menjac::setTipMenjaca(tipMenjaca t){
    tip = t;
}

int Menjac::getBrojBrzina() const{
    return brojBrzina;
}

string Menjac::getTipMenjaca() const{
    string temp;

    switch(tip){
        case AUTOMATSKI:
            temp = "automatski";
            break;
        case MANUELNI:
            temp = "manuelni";
            break;
        default:
            temp = "nedefinisan";
            break;
    }

    return temp;
}

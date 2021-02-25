#include "skoljka.hpp"

Skoljka::Skoljka(){
    boja = PLAVA;
}

Skoljka::Skoljka(bojaSkoljke b){
    boja = b;
}

Skoljka::Skoljka(const Skoljka &s){
    boja = s.boja;
}

void Skoljka::setBojaSkoljke(bojaSkoljke b){
    boja = b;
}

string Skoljka::getBojaSkoljke() const{
    string temp;

    switch(boja){
        case ZELENA:
            temp = "zelena";
            break;
        case PLAVA:
            temp = "plava";
            break;
        case CRVENA:
            temp = "crvena";
            break;
        default:
            temp = "nedefinisana";
            break;
    }

    return temp;
}

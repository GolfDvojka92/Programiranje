#pragma once

#include <iostream>
using namespace std;

enum bojaSkoljke{PLAVA = 1,CRVENA,ZELENA};

class Skoljka{
    private:
        bojaSkoljke boja;
    public:
        Skoljka();
        Skoljka(bojaSkoljke);
        Skoljka(const Skoljka &);
        void setBojaSkoljke(bojaSkoljke);
        string getBojaSkoljke() const;
};

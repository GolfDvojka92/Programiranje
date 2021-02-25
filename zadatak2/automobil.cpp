#include "automobil.hpp"

Automobil::Automobil() : M(), S() {
    t = UGASEN;
    trenutnaBrzina = 0;
}

Automobil::Automobil(int brojBrzina, tipMenjaca tip, bojaSkoljke boja, trenutnoStanje tt, int tBrzina) : M(brojBrzina, tip), S(boja) {
    t = tt;
    trenutnaBrzina = tBrzina;
}

Automobil::Automobil(const Automobil &a) : M(a.M), S(a.S) {
    t = a.t;
    trenutnaBrzina = a.trenutnaBrzina;
}

bool Automobil::upali(){
    bool uspesno = false;
    if(t == UGASEN){
        t = UPALJEN;
        trenutnaBrzina = 1;
        uspesno = true;
    }
    return uspesno;
}

bool Automobil::ugasi(){
    bool uspesno = false;
    if(t == UPALJEN){
        t = UGASEN;
        trenutnaBrzina = 0;
        uspesno = true;
    }
    return uspesno;
}

bool Automobil::pokvari(){
    bool uspesno = false;
    if(t != POKVAREN){
        t = POKVAREN;
        trenutnaBrzina = 0;
        uspesno = true;
    }
    return uspesno;
}

bool Automobil::popravi(){
    bool uspesno = false;
    if(t == POKVAREN){
        t = UGASEN;
        trenutnaBrzina = 0;
        uspesno = true;
    }
    return uspesno;
}

bool Automobil::povecajBrzinu(){
    bool uspesno = false;
    if(t == UPALJEN && trenutnaBrzina + 1 <= M.getBrojBrzina()){
        trenutnaBrzina += 1;
        uspesno = true;
    }
    return uspesno;
}

bool Automobil::smanjiBrzinu(){
    bool uspesno = false;
    if(t == UPALJEN && trenutnaBrzina - 1 >= 0){
        trenutnaBrzina -= 1;
        uspesno = true;
    }
    return uspesno;
}

int Automobil::getBrojBrzina() const{
    return M.getBrojBrzina();
}

string Automobil::getTip() const{
    return M.getTipMenjaca();
}

string Automobil::getBoja() const{
    return S.getBojaSkoljke();
}

string Automobil::getTrenutnoStanje() const{
    string temp;

    switch(t){
        case UGASEN:
            temp = "ugasen";
            break;
        case UPALJEN:
            temp = "upaljen";
            break;
        case POKVAREN:
            temp = "pokvaren";
            break;
        default:
            temp = "nedefinisan";
            break;
    }

    return temp;
}

int Automobil::getTrenutnaBrzina() const{
    return trenutnaBrzina;
}

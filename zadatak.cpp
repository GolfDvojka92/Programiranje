#include <iostream>
#include "dinstring.hpp"
#include "list.hpp"
 
using namespace std;
 
class Artikal
{
public:
    virtual double IzracunajVrednost(void) = 0;
};
 
class Lek : public Artikal
{
public:
    Lek();
    Lek(Lek &original);
    Lek(DinString& nnaziv, long int njkl, int nkolicina, double njedinicnacena);
    Lek(char nnaziv[], long int njkl, int nkolicina, double njedinicnacena);
    virtual double IzracunajVrednost(void) { return jedinicnacena * kolicina; }
private:
    long int jkl;
    DinString naziv;
    int kolicina;
    double jedinicnacena;
};
 
class EvidencijaLekova
{
public:
    EvidencijaLekova();
    void DodajLek(Lek &lek);
    void DodajLek(Lek lek);
    void ObrisiLek(Lek &lek);
private:
    DinString nazivapoteke;
    DinString datum;
    List<Lek> lekovi;
};
 
Lek::Lek()
{
    jkl = 0;
    naziv = "";
    kolicina = 0;
    jedinicnacena = 0.0;
}
 
Lek::Lek(Lek& original)
{
    jkl = original.jkl;
    naziv = original.naziv;
    kolicina = original.kolicina;
    jedinicnacena = original.jedinicnacena;
}
 
Lek::Lek(DinString& nnaziv, long int njkl, int nkolicina, double njedinicnacena)
{
    jkl = njkl;
    naziv = nnaziv;
    kolicina = nkolicina;
    jedinicnacena = njedinicnacena;
}
 
Lek::Lek(char nnaziv[], long int njkl, int nkolicina, double njedinicnacena)
{
    jkl = njkl;
    naziv = nnaziv;
    kolicina = nkolicina;
    jedinicnacena = njedinicnacena;
}
 
EvidencijaLekova::EvidencijaLekova()
{
    nazivapoteke = "";
    datum = "";
}
 
void EvidencijaLekova::DodajLek(Lek& lek)
{
    lekovi.add(1, lek);
}
 
void EvidencijaLekova::DodajLek(Lek lek)
{
    lekovi.add(lekovi.size() + 1, lek);
}
 
void EvidencijaLekova::ObrisiLek(Lek &lek)
{
    for (int i = 0; i <= lekovi.size(); i++)
    {
        if (lekovi.read(i, lek))
        {
            lekovi.remove(i);
            break;
        }
    }
}
 
int main()
{
    return 0;
}
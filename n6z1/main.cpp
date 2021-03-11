#include <iostream>

using namespace std;

enum TipPreliva {COKOLADNI, COKOLADNI_SA_SLAGOM};
class Preliv
{
private:
    TipPreliva tip;
public:
    Preliv()
    {
        tip = COKOLADNI;
    }
    Preliv(TipPreliva t)
    {
        tip = t;
    }
    Preliv(const Preliv &p)
    {
        tip = p.tip;
    }
    bool dodajSlag()
    {
        if(tip == COKOLADNI_SA_SLAGOM)
            return false;
        tip = COKOLADNI_SA_SLAGOM;
        return true;
    }
    bool ukloniSlag()
    {
        if(tip==COKOLADNI)
            return false;
        tip = COKOLADNI;
        return true;
    }
    TipPreliva getTip() const
    {
        return tip;
    }
};

void ispisiPreliv(const Preliv & p)
{
    if(p.getTip()==COKOLADNI)
    {
        cout<<"Cokoladni"<<endl;
    }
    else
    {
        cout<<"COKOLADNI SA SLAGOM"<<endl;
    }
}


enum KolacStanje {U_PRIPREMI, PECE_SE, ZAGOREO, PRIPREMLJEN};
class Kolac
{

private:
    KolacStanje stanje;
    int temperatura;
    Preliv* preliv;
public:
    Kolac()
    {
        preliv = new Preliv();
        temperatura = 20;
        stanje = U_PRIPREMI;
    }
    Kolac(const Kolac & k)
    {
        stanje = k.stanje;
        temperatura = k.temperatura;
        preliv = new Preliv(*k.getPreliv());
    }
    bool staviDaSePece()
    {
        if(preliv->getTip()==COKOLADNI_SA_SLAGOM)
            return false;
        stanje = PECE_SE;
        temperatura += 1;
        return true;
    }
    bool ispeciKolac()
    {
        if(stanje != PECE_SE)
            return false;
        stanje = U_PRIPREMI;
        temperatura = 20;
        return true;
    }
    bool zavrsiKolac()
    {
        if(stanje!=U_PRIPREMI)
        {
            return false;
        }
        stanje = PRIPREMLJEN;
        return true;
    }
    bool povecajTemperaturu()
    {
        if(stanje!=PECE_SE)
            return false;
        if(temperatura+=1>100)
        {
            stanje = ZAGOREO;
            temperatura = 20;
            return true;
        }
        temperatura += 1;
        return true;
    }
    bool smanjiTemperaturu()
    {
        if(stanje != PECE_SE)
        {
            return false;
        }
        if(temperatura-1<40)
        {
            return false;
        }
        temperatura -=1;
        return true;
    }
    bool dodajSlag()
    {
        if(stanje!=U_PRIPREMI)
            return false;
        return preliv->dodajSlag();
    }
    bool ukloniSlag()
    {
        if(stanje!=U_PRIPREMI)
            return false;
        return preliv->ukloniSlag();
    }
    KolacStanje getStanje() const
    {
        return stanje;
    }
    int getTemperatura()const
    {
        return temperatura;
    }
    Preliv* getPreliv()const
    {
        return preliv;
    }

};

void ispisiKolac(const Kolac& k)
{
    cout<<"Stanje: ";
    if(k.getStanje()==U_PRIPREMI)
    {
        cout<<"U PRIPREMI";
    }
    if(k.getStanje()==PECE_SE)
    {
        cout<<"PECE SE";
    }
    if(k.getStanje()==ZAGOREO)
    {
        cout<<"Zagoreo";
    }
    if(k.getStanje()==PRIPREMLJEN)
    {
        cout<<"PRIPREMLJEN";
    }
    cout<<endl;
    cout<<"Temperatura: "<<k.getTemperatura()<<endl;
    cout<<"Preliv: ";
    ispisiPreliv(*(k.getPreliv()));
}

void meni()
{
    Kolac k;
    int i = -1;
    while(i!=9)
    {

        printf("1. Stavi da se pece\n");
        printf("2. Ispeci Kolac\n");
        printf("3. Zavrsi Kolac\n");
        printf("4. Povecaj Temperaturu\n");
        printf("5. Smanji Temperaturu\n");
        printf("6. dodaj slag\n");
        printf("7. ukloni slag\n");
        printf("8. ispisi info\n");
        printf("9. kraj\n");
        scanf("%i", &i);
       getchar();
        if(i==1)
        {
            if(k.staviDaSePece())
            {
                printf("Stavi da se pece\n");
            }
            else
            {
                printf("Error\n");
            }
        }
        if(i==2)
        {
            if(k.ispeciKolac())
            {
                printf("Ispeci Kolac\n");
            }
            else
            {
                printf("Error\n");
            }
        }
        if(i==3)
        {
            if(k.zavrsiKolac())
            {
                printf("Zavrsi Kolac\n");
            }
            else
            {
                printf("Error\n");

            }
        }
        if(i==4)
        {
            if(k.povecajTemperaturu())
            {
                printf("Uspesno povecana temperatura\n");

            }
            else
            {
                printf("Error\n");
            }
        }
        if(i==5)
        {
            if(k.smanjiTemperaturu())
            {
                printf("Uspesno smanjena temperatura\n");
            }
            else
            {
                printf("Error\n");
            }
        }
        if(i==6)
        {
            if(k.dodajSlag())
            {
                printf("Dodat slag\n");
            }
            else
            {
                printf("Error\n");
            }
        }
        if(i==7)
        {
            if(k.ukloniSlag())
            {
                printf("Uklonjen slag\n");
            }
            else
            {
                printf("Error\n");
            }
        }
        if(i==8)
        {
            ispisiKolac(k);
        }

    }
}


int main()
{
    meni();
    return 0;
}
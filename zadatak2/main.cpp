#include "menjac.cpp"
#include "skoljka.cpp"
#include "automobil.cpp"

int main()
{

     Menjac m1;
     Menjac m2(2, AUTOMATSKI);
     Menjac m3(m2);

     Skoljka s1;
     Skoljka s2(ZELENA);
     Skoljka s3(s2);

     Automobil a1;
     Automobil a2(6, MANUELNI, ZELENA, UPALJEN, 2);
     Automobil a3(a2);

     cout << "Prvi menjac je " << m1.getTipMenjaca() << " i ima " << m1.getBrojBrzina() << " brzine. " << endl;
     cout << "Drugi menjac je " << m2.getTipMenjaca() << " i ima " << m2.getBrojBrzina() << " brzine. " << endl;
     cout << "Treci menjac je " << m3.getTipMenjaca() << " i ima " << m3.getBrojBrzina() << " brzine. " << endl;

     m2.setBrojBrzina(5);
     m2.setTipMenjaca(MANUELNI);

     cout << "Menjac nakon promene je " << m2.getTipMenjaca() << " i ima " << m2.getBrojBrzina() << " brzine. " << endl
          << endl;

     cout << "Boja prve skoljke je " << s1.getBojaSkoljke() << endl;
     cout << "Boja druge skoljke je " << s2.getBojaSkoljke() << endl;
     cout << "Boja trece skoljke je " << s3.getBojaSkoljke() << endl;

     s2.setBojaSkoljke(CRVENA);

     cout << "Boja skoljke nakon promene je " << s2.getBojaSkoljke() << endl
          << endl
          << endl;

     cout << "*** Automobili ***" << endl;
     cout << "Menjac prvog automobila je " << a1.getTip() << " i ima " << a1.getBrojBrzina() << " brzine. " << endl;
     cout << "Boja skoljke prvog automobila je " << a1.getBoja() << endl;
     cout << "Trenutno stanje prvog automobila je " << a1.getTrenutnoStanje() << " i on je u " << a1.getTrenutnaBrzina() << " brzini" << endl
          << endl;

     cout << "Menjac drugog automobila je " << a2.getTip() << " i ima " << a2.getBrojBrzina() << " brzine. " << endl;
     cout << "Boja skoljke drugog automobila je " << a2.getBoja() << endl;
     cout << "Trenutno stanje drugog automobila je " << a2.getTrenutnoStanje() << " i on je u " << a2.getTrenutnaBrzina() << " brzini" << endl
          << endl;

     cout << "Menjac treceg automobila je " << a3.getTip() << " i ima " << a3.getBrojBrzina() << " brzine. " << endl;
     cout << "Boja skoljke treceg automobila je " << a3.getBoja() << endl;
     cout << "Trenutno stanje treceg automobila je " << a3.getTrenutnoStanje() << " i on je u " << a3.getTrenutnaBrzina() << " brzini" << endl
          << endl;

     cout << "Kontrolisacemo drugi automobil. " << endl;

     a2.pokvari();
     cout << "Trenutno stanje drugog automobila je " << a2.getTrenutnoStanje() << " i on je u " << a2.getTrenutnaBrzina() << " brzini" << endl
          << endl;

     a2.popravi();
     cout << "Trenutno stanje drugog automobila je " << a2.getTrenutnoStanje() << " i on je u " << a2.getTrenutnaBrzina() << " brzini" << endl
          << endl;

     a2.upali();
     cout << "Trenutno stanje drugog automobila je " << a2.getTrenutnoStanje() << " i on je u " << a2.getTrenutnaBrzina() << " brzini" << endl
          << endl;

     a2.povecajBrzinu();
     cout << "Trenutno stanje drugog automobila je " << a2.getTrenutnoStanje() << " i on je u " << a2.getTrenutnaBrzina() << " brzini" << endl
          << endl;

     a2.povecajBrzinu();
     cout << "Trenutno stanje drugog automobila je " << a2.getTrenutnoStanje() << " i on je u " << a2.getTrenutnaBrzina() << " brzini" << endl
          << endl;

     a2.smanjiBrzinu();
     cout << "Trenutno stanje drugog automobila je " << a2.getTrenutnoStanje() << " i on je u " << a2.getTrenutnaBrzina() << " brzini" << endl
          << endl;

     return 0;
}

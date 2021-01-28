#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    double n,rez=0;
    cout << "Unesite zeljeni broj:";
    cin >> n;
    for(int i=0;i<n;i++)
    {
        rez+=sqrt(i);
    }
    cout << fixed;
    cout << setprecision(2) << "Rezultat je:" << rez;
    return 0;
}

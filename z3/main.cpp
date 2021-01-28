#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Unesite zeljenu godinu:";
    cin >> n;
    if(n>0&&n%400==0)
    {
        cout << "Godina je prestupna.";
    }
    else if(n>0&&n%4==0&&n%100!=0)
    {
        cout << "Godina je prestupna.";
    }
    else
    {
        cout << "Godina nije prestupna.";
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int n,m=1,i;
    cout << "Unesite zeljeni broj: ";
    cin >> n;
    for(i=1;i<=n;i++)
    {
        m*=i;
    }
    cout << "Faktorijel unesenog broja je:" << m;
    return 0;
}

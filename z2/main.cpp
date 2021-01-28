#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int i;
    cout << "Trocifreni brojevi cija je vrednost jednaka zbiru kubova cifara su: " << endl;
    for(i=100;i<1000;i++)
    {
        if(i == pow(i%10,3)+pow(i/10%10,3)+pow(i/100%10,3))
        {
            cout << i << endl;
        }
    }
    return 0;
}

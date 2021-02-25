#include <iostream>
#include <cmath>

using namespace std;

class Power
{
private:
    float x;
    int y;

public:
    Power()
    {
        x = 1;
        y = 1;
    }

    Power(float xx, int yy)
    {
        x = xx;
        y = yy;
    }

    Power(Power &p)
    {
        x = p.x;
        y = p.y;
    }

    void setX(float xx)
    {
        x = xx;
    }

    void setY(int yy)
    {
        y = yy;
    }

    void setX_Y(float xx, int yy)
    {
        x = xx;
        y = yy;
    }

    float getX() const
    {
        return x;
    }

    int getY() const
    {
        return y;
    }

    float getXnaY() const
    {
        return pow(x, y);
    }
};

int main()
{
    Power p1;
    Power p2(4, 2);
    Power p3(p2);

    cout << "Test 1. poziva: " << endl;

    cout << "X:" << p1.getX() << endl;
    cout << "Y:" << p1.getY() << endl;
    cout << "X na Y: " << p1.getXnaY() << endl
         << endl;

    cout << "Test 2. poziva: " << endl;

    cout << "X:" << p2.getX() << endl;
    cout << "Y:" << p2.getY() << endl;
    cout << "X na Y: " << p2.getXnaY() << endl
         << endl;

    p2.setX(5);
    p2.setY(2);

    cout << "Test 2. poziva posle prve promene: " << endl;

    cout << "X:" << p2.getX() << endl;
    cout << "Y:" << p2.getY() << endl;
    cout << "X na Y: " << p2.getXnaY() << endl
         << endl;

    p2.setX_Y(2, 3);

    cout << "Test 2. poziva posle druge promene: " << endl;

    cout << "X:" << p2.getX() << endl;
    cout << "Y:" << p2.getY() << endl;
    cout << "X na Y: " << p2.getXnaY() << endl
         << endl;

    cout << "Test 3. poziva: " << endl;

    cout << "X:" << p3.getX() << endl;
    cout << "Y:" << p3.getY() << endl;
    cout << "X na Y: " << p3.getXnaY() << endl
         << endl;

    return 0;
}

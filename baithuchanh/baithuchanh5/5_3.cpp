#include <bits/stdc++.h>
using namespace std;

class TAMTHUC
{
private:
    float a, b, c;
public:
    TAMTHUC(float a = 0, float b = 0, float c = 0)
    {
        this->a = a; this->b = b; this->c = c;
    }
    TAMTHUC operator-() { a = -a; b = -b; c = -c; return *this; }
    TAMTHUC operator+(TAMTHUC x) { return TAMTHUC(a + x.a, b + x.b, c + x.c); }
    TAMTHUC operator-(TAMTHUC x) { return TAMTHUC(a - x.a, b - x.b, c - x.c); }
    friend ostream &operator<<(ostream &os, TAMTHUC x);
};

ostream &operator<<(ostream &os, TAMTHUC x)
{
    os << x.a << "x^2";
    if (x.b >= 0)
        os << "+" << x.b << "x";
    else
        os << x.b << "x";
    if (x.c >= 0)
        os << "+" << x.c;
    else
        os << x.c;
    return os;
}

int main()
{
    TAMTHUC p(1, 2, 3), q(2, -3, 4);
    p = -p; q = -q;
    cout << "P sau khi doi dau: " << p;
    cout << "\nQ sau khi doi dau: " << q;
    cout << "\nTong hai tam thuc: " << p + q;
    cout << "\nHieu hai tam thuc: " << p - q;
    return 0;
}

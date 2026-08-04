#include <bits/stdc++.h>
using namespace std;

class TAMGIAC
{
private:
    float a, b, c;
public:
    operator float() { return a + b + c; }
    friend istream &operator>>(istream &is, TAMGIAC &x);
    friend ostream &operator<<(ostream &os, TAMGIAC x);
};

istream &operator>>(istream &is, TAMGIAC &x)
{
    cout << "\nNhap canh a: "; is >> x.a;
    cout << "\nNhap canh b: "; is >> x.b;
    cout << "\nNhap canh c: "; is >> x.c;
    return is;
}

ostream &operator<<(ostream &os, TAMGIAC x)
{
    os << "Canh a: " << x.a;
    os << "\nCanh b: " << x.b;
    os << "\nCanh c: " << x.c;
    os << "\nChu vi: " << (float)x;
    return os;
}

int main()
{
    TAMGIAC p, q;
    cout << "NHAP TAM GIAC P"; cin >> p;
    cout << "\nNHAP TAM GIAC Q"; cin >> q;
    ofstream f("INOUT.txt");
    f << "TAM GIAC P";
    f << "\n" << p;
    f << "\nTAM GIAC Q";
    f << "\n" << q;
    f.close();
    return 0;
}

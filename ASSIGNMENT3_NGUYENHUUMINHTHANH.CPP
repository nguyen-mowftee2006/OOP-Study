#include <bits/stdc++.h>
using namespace std;

class PHANSO
{
private:
    int tu, mau;
public:
    PHANSO()
    {
        this->tu = 0; this->mau = 1;
    }
    PHANSO(int tu, int mau)
    {
        this->tu = tu; this->mau = mau;
    }
    PHANSO operator*(PHANSO x)
    {
        return PHANSO(tu * x.tu, mau * x.mau);
    }
    operator float()
    {
        return (float)tu / mau;
    }
    friend istream &operator>>(istream &is, PHANSO &x);
    friend ostream &operator<<(ostream &os, PHANSO x);
};

istream &operator>>(istream &is, PHANSO &x)
{
    cout << "\nNhap tu so: "; is >> x.tu;
    do
    {
        cout << "\nNhap mau so khac 0: "; is >> x.mau;
    } while (x.mau == 0);
    return is;
}

ostream &operator<<(ostream &os, PHANSO x)
{
    os << x.tu << "/" << x.mau;
    return os;
}

int main()
{
    PHANSO a, b, c;
    cout << "NHAP PHAN SO THU NHAT"; cin >> a;
    cout << "\nNHAP PHAN SO THU HAI"; cin >> b;
    c = a * b;
    ofstream f("PHANSO.txt");
    f << c;
    f.close();
    cout << "\nDa ghi phan so tich " << c << " vao tep PHANSO.txt.";
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

class SOPHUC
{
private:
    float phanthuc, phanao;
public:
    SOPHUC(float phanthuc = 0, float phanao = 0)
    {
        this->phanthuc = phanthuc; this->phanao = phanao;
    }
    SOPHUC operator+(SOPHUC x)
    {
        return SOPHUC(phanthuc + x.phanthuc, phanao + x.phanao);
    }
    bool operator==(SOPHUC x)
    {
        return phanthuc == x.phanthuc && phanao == x.phanao
            && phanthuc > 0 && x.phanthuc > 0 && phanao > 0 && x.phanao > 0;
    }
    friend istream &operator>>(istream &is, SOPHUC &x);
    friend ostream &operator<<(ostream &os, SOPHUC x);
};

istream &operator>>(istream &is, SOPHUC &x)
{
    cout << "\nNhap phan thuc: "; is >> x.phanthuc;
    cout << "\nNhap phan ao: "; is >> x.phanao;
    return is;
}

ostream &operator<<(ostream &os, SOPHUC x)
{
    os << x.phanthuc;
    if (x.phanao >= 0)
        os << " + " << x.phanao << "i";
    else
        os << " - " << -x.phanao << "i";
    return os;
}

int main()
{
    SOPHUC a, b, tong;
    cout << "\nNHAP SO PHUC A"; cin >> a;
    cout << "\nNHAP SO PHUC B"; cin >> b;
    tong = a + b;
    cout << "\nA + B = " << tong;
    if (a == b)
        cout << "\nA va B bang nhau.";
    else
        cout << "\nA va B khong bang nhau.";
    return 0;
}

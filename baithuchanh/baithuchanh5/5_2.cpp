#include <bits/stdc++.h>
using namespace std;

class SOPHUC
{
private:
    float thuc, ao;
public:
    SOPHUC(float thuc = 0, float ao = 0)
    {
        this->thuc = thuc; this->ao = ao;
    }
    SOPHUC operator+(SOPHUC x) { return SOPHUC(thuc + x.thuc, ao + x.ao); }
    SOPHUC operator-(SOPHUC x) { return SOPHUC(thuc - x.thuc, ao - x.ao); }
    friend ostream &operator<<(ostream &os, SOPHUC x);
};

ostream &operator<<(ostream &os, SOPHUC x)
{
    os << x.thuc << " + i* " << x.ao;
    return os;
}

int main()
{
    float a1, b1, a2, b2;
    cout << "\nNhap phan thuc SP1: "; cin >> a1;
    cout << "\nNhap phan ao SP1: "; cin >> b1;
    cout << "\nNhap phan thuc SP2: "; cin >> a2;
    cout << "\nNhap phan ao SP2: "; cin >> b2;
    SOPHUC sp1(a1, b1), sp2(a2, b2);
    SOPHUC sp3 = sp1 + sp2, sp4 = sp1 - sp2;
    cout << "\nSP3 = SP1 + SP2 = " << sp3;
    cout << "\nSP4 = SP1 - SP2 = " << sp4;
    return 0;
}

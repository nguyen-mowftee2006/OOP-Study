#include <bits/stdc++.h>
using namespace std;

class MAYIN
{
private:
    char ten[50], mausac[20];
    long giathanh;
public:
    MAYIN()
    {
        strcpy(this->ten, ""); strcpy(this->mausac, ""); this->giathanh = 0;
    }
    MAYIN(const char ten[], const char mausac[], long giathanh)
    {
        strcpy(this->ten, ten); strcpy(this->mausac, mausac); this->giathanh = giathanh;
    }
    bool operator--()
    {
        return strcmp(mausac, "Trang") == 0 && giathanh > 95;
    }
    bool operator==(MAYIN y)
    {
        return strcmp(ten, y.ten) == 0 && giathanh == y.giathanh;
    }
    friend istream &operator>>(istream &is, MAYIN &x);
    friend ostream &operator<<(ostream &os, MAYIN x);
};

istream &operator>>(istream &is, MAYIN &x)
{
    cout << "\nNhap ten may in: "; is >> ws; is.getline(x.ten, 50);
    cout << "\nNhap mau sac: "; is.getline(x.mausac, 20);
    cout << "\nNhap gia thanh: "; is >> x.giathanh;
    return is;
}

ostream &operator<<(ostream &os, MAYIN x)
{
    os << "\nTen may in: " << x.ten;
    os << "\nMau sac: " << x.mausac;
    os << "\nGia thanh: " << x.giathanh;
    return os;
}

int main()
{
    MAYIN a, b("Canon", "Trang", 100);
    cout << "\nNHAP THONG TIN MAY IN A"; cin >> a;
    cout << "\nTHONG TIN MAY IN A" << a;
    cout << "\nTHONG TIN MAY IN B" << b;
    if (--a)
        cout << "\nMay in A co mau trang va gia thanh lon hon 95.";
    if (--b)
        cout << "\nMay in B co mau trang va gia thanh lon hon 95.";
    if (!(--a) && !(--b))
        cout << "\nKhong co may in nao co mau trang va gia thanh lon hon 95.";
    if (a == b)
        cout << "\nHai may in cung ten va cung gia thanh.";
    else
        cout << "\nHai may in khong cung ten va cung gia thanh.";
    return 0;
}

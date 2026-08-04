#include <bits/stdc++.h>
using namespace std;

class PHANSO
{
private:
    int tu, mau;
public:
    PHANSO(int tu = 0, int mau = 1)
    {
        this->tu = tu; this->mau = mau;
    }
    PHANSO operator*(PHANSO x) { return PHANSO(tu * x.tu, mau * x.mau); }
    PHANSO operator/(PHANSO x) { return PHANSO(tu * x.mau, mau * x.tu); }
    PHANSO operator+(PHANSO x) { return PHANSO(tu * x.mau + mau * x.tu, mau * x.mau); }
    PHANSO operator-(PHANSO x) { return PHANSO(tu * x.mau - mau * x.tu, mau * x.mau); }
    operator float() { return (float)tu / mau; }
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
    PHANSO a, b, tich, thuong, tong, hieu;
    cout << "\nNHAP PHAN SO THU NHAT"; cin >> a;
    cout << "\nNHAP PHAN SO THU HAI"; cin >> b;
    tich = a * b; thuong = a / b; tong = a + b; hieu = a - b;
    cout << "\nTich: " << tich << " = " << (float)tich;
    cout << "\nThuong: " << thuong << " = " << (float)thuong;
    cout << "\nTong: " << tong << " = " << (float)tong;
    cout << "\nHieu: " << hieu << " = " << (float)hieu;
    ofstream f("PHANSO.txt");
    f << "Tich: " << tich << " = " << (float)tich;
    f << "\nThuong: " << thuong << " = " << (float)thuong;
    f << "\nTong: " << tong << " = " << (float)tong;
    f << "\nHieu: " << hieu << " = " << (float)hieu;
    f.close();
    return 0;
}

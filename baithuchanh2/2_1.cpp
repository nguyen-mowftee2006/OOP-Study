#include <bits/stdc++.h>
using namespace std;

class DATE
{
private:
    int d, m, y;

public:
    void NHAP()
    {
        cout << "\n - Ngay: "; cin >> d;
        cout << " - Thang: "; cin >> m;
        cout << " - Nam: "; cin >> y;
    }

    void XUAT()
    {
        cout << d << "/" << m << "/" << y;
    }
};

class NHANSU
{
private:
    string ma, hoten;
    DATE ns;

public:
    void NHAP()
    {
        cout << "\n - Ma nhan su: "; cin >> ma;
        cout << " - Ho ten: "; getline(cin >> ws, hoten);

        cout << " - Ngay sinh:";
        ns.NHAP();
    }

    void XUAT()
    {
        cout << "\nTHONG TIN NHAN SU";
        cout << "\n - Ma nhan su: " << ma;
        cout << "\n - Ho ten: " << hoten;
        cout << "\n - Ngay sinh: ";
        ns.XUAT();
    }
};

int main()
{
    NHANSU x;

    cout << "\nNHAP THONG TIN NHAN SU";
    x.NHAP();

    x.XUAT();

    return 0;
}
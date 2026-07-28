#include <bits/stdc++.h>
using namespace std;

class HANG;

class NSX
{
private:
    string ma, ten, dc;

    friend class HANG;
};

class HANG
{
private:
    string ma, ten;
    float dg, tl;
    NSX x;

public:
    void NHAP()
    {
        cout << "\n - Ma hang: ";
        cin >> ma;

        cout << " - Ten hang: ";
        getline(cin >> ws, ten);

        cout << " - Don gia: ";
        cin >> dg;

        cout << " - Trong luong: ";
        cin >> tl;

        cout << " - Ma nha san xuat: ";
        cin >> x.ma;

        cout << " - Ten nha san xuat: ";
        getline(cin >> ws, x.ten);

        cout << " - Dia chi nha san xuat: ";
        getline(cin >> ws, x.dc);
    }

    void XUAT()
    {
        cout << "\nTHONG TIN MAT HANG";
        cout << "\n - Ma hang: " << ma;
        cout << "\n - Ten hang: " << ten;
        cout << "\n - Don gia: " << dg;
        cout << "\n - Trong luong: " << tl;
        cout << "\n - Ma nha san xuat: " << x.ma;
        cout << "\n - Ten nha san xuat: " << x.ten;
        cout << "\n - Dia chi nha san xuat: " << x.dc;
    }
};

int main()
{
    HANG a;

    cout << "\nNHAP THONG TIN MAT HANG";
    a.NHAP();

    a.XUAT();

    return 0;
}
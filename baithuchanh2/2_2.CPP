#include <bits/stdc++.h>
using namespace std;

class NSX
{
private:
    string ma, ten, dc;

public:
    void NHAP()
    {
        cout << "\n - Ma nha san xuat: "; cin >> ma;
        cout << " - Ten nha san xuat: "; getline(cin >> ws, ten);
        cout << " - Dia chi nha san xuat: "; getline(cin >> ws, dc);
    }

    void XUAT()
    {
        cout << "\n - Ma nha san xuat: " << ma;
        cout << "\n - Ten nha san xuat: " << ten;
        cout << "\n - Dia chi nha san xuat: " << dc;
    }
};

class HANG
{
private:
    string ma, ten;
    NSX x;

public:
    void NHAP()
    {
        cout << "\n - Ma hang: "; cin >> ma;
        cout << " - Ten hang: "; getline(cin >> ws, ten);

        cout << "\nNHAP THONG TIN NHA SAN XUAT";
        x.NHAP();
    }

    void XUAT()
    {
        cout << "\nTHONG TIN MAT HANG";
        cout << "\n - Ma hang: " << ma;
        cout << "\n - Ten hang: " << ten;

        cout << "\nTHONG TIN NHA SAN XUAT";
        x.XUAT();
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
#include <bits/stdc++.h>
using namespace std;

class HANG
{
private:
    string ma, ten;
    float dg;

public:
    void NHAP()
    {
        cout << "\n - Ma hang: "; cin >> ma;
        cout << " - Ten hang: "; getline(cin >> ws, ten);
        cout << " - Don gia: "; cin >> dg;
    }

    void XUAT()
    {
        cout << left << setw(15) << ma << setw(25) << ten << setw(15) << dg << "\n";
    }
};

class PHIEU
{
private:
    string ma;
    HANG x[100];
    int n;

public:
    void NHAP()
    {
        cout << "\n - Ma phieu: "; cin >> ma;
        cout << " - So mat hang: "; cin >> n;

        for (int i = 0; i < n; i++)
        {
            cout << "\nNhap mat hang thu " << i + 1 << ":";
            x[i].NHAP();
        }
    }

    void XUAT()
    {
        cout << "\nTHONG TIN PHIEU";
        cout << "\n - Ma phieu: " << ma;
        cout << "\n - So mat hang: " << n;

        cout << "\n\n";
        cout << left << setw(15) << "Ma hang" << setw(25) << "Ten hang" << setw(15) << "Don gia" << "\n";

        for (int i = 0; i < n; i++)
            x[i].XUAT();
    }
};

int main()
{
    PHIEU p;

    cout << "\nNHAP THONG TIN PHIEU";
    p.NHAP();

    p.XUAT();

    return 0;
}
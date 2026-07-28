#include <bits/stdc++.h>
using namespace std;

class MAY
{
private:
    string ma, kieu, tinhtrang;

public:
    void NHAP()
    {
        cout << "\n - Ma may: "; cin >> ma;
        cout << " - Kieu may: "; getline(cin >> ws, kieu);
        cout << " - Tinh trang: "; getline(cin >> ws, tinhtrang);
    }

    void XUAT()
    {
        cout << left << setw(15) << ma << setw(25) << kieu << setw(25) << tinhtrang << "\n";
    }
};

class QUANLY
{
private:
    string ma, hoten;

public:
    void NHAP()
    {
        cout << "\n - Ma quan ly: "; cin >> ma;
        cout << " - Ho ten quan ly: "; getline(cin >> ws, hoten);
    }

    void XUAT()
    {
        cout << "\n - Ma quan ly: " << ma;
        cout << "\n - Ho ten quan ly: " << hoten;
    }
};

class PHONGMAY
{
private:
    string ma, ten;
    float dt;
    QUANLY x;
    MAY *y;
    int n;

public:
    PHONGMAY()
    {
        y = NULL;
        n = 0;
    }

    ~PHONGMAY()
    {
        delete[] y;
        y = NULL;
        n = 0;
    }

    void NHAP()
    {
        cout << "\n - Ma phong: "; cin >> ma;
        cout << " - Ten phong: "; getline(cin >> ws, ten);
        cout << " - Dien tich: "; cin >> dt;

        cout << "\nNHAP THONG TIN QUAN LY";
        x.NHAP();

        cout << "\n - So may tinh: "; cin >> n;

        if (y != NULL)
            delete[] y;

        y = new MAY[n];

        for (int i = 0; i < n; i++)
        {
            cout << "\nNhap may tinh thu " << i + 1 << ":";
            y[i].NHAP();
        }
    }

    void XUAT()
    {
        cout << "\nTHONG TIN PHONG MAY";
        cout << "\n - Ma phong: " << ma;
        cout << "\n - Ten phong: " << ten;
        cout << "\n - Dien tich: " << dt;

        cout << "\n\nTHONG TIN QUAN LY";
        x.XUAT();

        cout << "\n\nDANH SACH MAY TINH\n";
        cout << left << setw(15) << "Ma may" << setw(25) << "Kieu may" << setw(25) << "Tinh trang" << "\n";

        for (int i = 0; i < n; i++)
            y[i].XUAT();
    }
};

int main()
{
    PHONGMAY p;

    cout << "\nNHAP THONG TIN PHONG MAY";
    p.NHAP();

    p.XUAT();

    return 0;
}
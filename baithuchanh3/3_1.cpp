#include <bits/stdc++.h>
using namespace std;

class SINHVIEN
{
private:
    string ma, ten;
    float toan, ly, hoa;

public:
    void NHAP()
    {
        cout << "\n - Ma sinh vien: ";
        cin >> ma;

        cout << " - Ho ten: ";
        getline(cin >> ws, ten);

        cout << " - Diem Toan: ";
        cin >> toan;

        cout << " - Diem Ly: ";
        cin >> ly;

        cout << " - Diem Hoa: ";
        cin >> hoa;
    }

    void XUAT()
    {
        cout << left << setw(12) << ma
             << setw(25) << ten
             << setw(10) << toan
             << setw(10) << ly
             << setw(10) << hoa
             << setw(10) << TongDiem(*this) << "\n";
    }

    friend float TongDiem(const SINHVIEN &x);
};

float TongDiem(const SINHVIEN &x)
{
    return x.toan + x.ly + x.hoa;
}

int main()
{
    SINHVIEN ds[100], tg;
    int n;

    cout << "\n - Nhap so sinh vien: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap sinh vien thu " << i + 1 << ":";
        ds[i].NHAP();
    }

    // Sap xep khong dung swap
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (TongDiem(ds[i]) > TongDiem(ds[j]))
            {
                tg = ds[i];
                ds[i] = ds[j];
                ds[j] = tg;
            }

    cout << "\nDANH SACH SINH VIEN\n";
    cout << left << setw(12) << "Ma SV"
         << setw(25) << "Ho ten"
         << setw(10) << "Toan"
         << setw(10) << "Ly"
         << setw(10) << "Hoa"
         << setw(10) << "Tong" << "\n";

    cout << fixed << setprecision(2);

    for (int i = 0; i < n; i++)
        ds[i].XUAT();

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class HANG;
bool Nam2017(const HANG &a);

class DATE
{
private:
    int d, m, y;

    friend class HANG;
    friend bool Nam2017(const HANG &a);
};

class HANG
{
private:
    string ma, ten;
    DATE ngaysx;

public:
    void NHAP()
    {
        cout << "\n - Ma hang: ";
        cin >> ma;

        cout << " - Ten hang: ";
        getline(cin >> ws, ten);

        cout << " - Ngay san xuat: ";
        cin >> ngaysx.d;

        cout << " - Thang san xuat: ";
        cin >> ngaysx.m;

        cout << " - Nam san xuat: ";
        cin >> ngaysx.y;
    }

    void XUAT()
    {
        cout << left << setw(15) << ma
             << setw(25) << ten
             << ngaysx.d << "/"
             << ngaysx.m << "/"
             << ngaysx.y << "\n";
    }

    friend bool Nam2017(const HANG &a);
};

bool Nam2017(const HANG &a)
{
    return a.ngaysx.y == 2017;
}

int main()
{
    HANG ds[100];
    int n;

    cout << "\n - Nhap so mat hang: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap mat hang thu " << i + 1 << ":";
        ds[i].NHAP();
    }

    cout << "\nCAC MAT HANG SAN XUAT NAM 2017\n";
    cout << left << setw(15) << "Ma hang"
         << setw(25) << "Ten hang"
         << "Ngay san xuat\n";

    bool kt = false;

    for (int i = 0; i < n; i++)
        if (Nam2017(ds[i]))
        {
            ds[i].XUAT();
            kt = true;
        }

    if (kt == false)
        cout << "\nKhong co mat hang san xuat nam 2017.";

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class HANG;

class DATE
{
private:
    int d, m, y;
    friend class HANG;
    friend bool Nam2017(HANG x);
};

class HANG
{
private:
    char ma[15], ten[50];
    DATE ngaysx;
public:
    void NHAP()
    {
        cout << "\nNhap ma hang: "; fflush(stdin); gets(ma);
        cout << "\nNhap ten hang: "; fflush(stdin); gets(ten);
        cout << "\nNhap ngay san xuat: "; cin >> ngaysx.d;
        cout << "\nNhap thang san xuat: "; cin >> ngaysx.m;
        cout << "\nNhap nam san xuat: "; cin >> ngaysx.y;
    }
    void XUAT()
    {
        cout << "\n" << setw(15) << ma << setw(30) << ten << ngaysx.d << "/" << ngaysx.m << "/" << ngaysx.y;
    }
    friend bool Nam2017(HANG x);
};

bool Nam2017(HANG x)
{
    return x.ngaysx.y == 2017;
}

int main()
{
    HANG x[100];
    int n;
    do
    {
        cout << "Nhap so mat hang: "; cin >> n;
    } while (n <= 0 || n > 100);
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap mat hang thu " << i + 1 << ":";
        x[i].NHAP();
    }
    cout << left;
    cout << "\nCAC MAT HANG SAN XUAT NAM 2017";
    cout << "\n" << setw(15) << "Ma hang" << setw(30) << "Ten hang" << "Ngay san xuat";
    for (int i = 0; i < n; i++)
        if (Nam2017(x[i]))
            x[i].XUAT();
    return 0;
}

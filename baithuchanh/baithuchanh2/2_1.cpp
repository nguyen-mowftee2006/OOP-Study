#include <bits/stdc++.h>
using namespace std;

class DATE
{
private:
    int d, m, y;
public:
    void NHAP()
    {
        cout << "\nNhap ngay: "; cin >> d;
        cout << "\nNhap thang: "; cin >> m;
        cout << "\nNhap nam: "; cin >> y;
    }
    void XUAT() { cout << d << "/" << m << "/" << y; }
};

class NHANSU
{
private:
    char ma[15], hoten[50];
    DATE ngaysinh;
public:
    void NHAP()
    {
        cout << "\nNhap ma nhan su: "; fflush(stdin); gets(ma);
        cout << "\nNhap ho ten: "; fflush(stdin); gets(hoten);
        cout << "\nNHAP NGAY SINH";
        ngaysinh.NHAP();
    }
    void XUAT()
    {
        cout << "\nMa nhan su: " << ma;
        cout << "\nHo ten: " << hoten;
        cout << "\nNgay sinh: "; ngaysinh.XUAT();
    }
};

int main()
{
    NHANSU x;
    cout << "NHAP THONG TIN NHAN SU";
    x.NHAP();
    cout << "\nTHONG TIN NHAN SU";
    x.XUAT();
    return 0;
}

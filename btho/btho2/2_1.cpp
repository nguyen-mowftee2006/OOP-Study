#include <bits/stdc++.h>
using namespace std;

class NSX
{
private:
    char ten[50], diachi[100];
    friend class HANG;
};

class DATE
{
private:
    int d, m, y;
    friend class TIVI;
};

class HANG
{
protected:
    char ten[50];
    NSX x;
    float dongia;
public:
    HANG()
    {
        this->ten[0] = '\0'; this->dongia = 0;
    }
    void NHAP()
    {
        cout << "\nNhap ten hang: "; fflush(stdin); gets(ten);
        cout << "\nNhap ten nha san xuat: "; fflush(stdin); gets(x.ten);
        cout << "\nNhap dia chi nha san xuat: "; fflush(stdin); gets(x.diachi);
        cout << "\nNhap don gia: "; cin >> dongia;
    }
    void XUAT()
    {
        cout << "\nTen hang: " << ten;
        cout << "\nTen nha san xuat: " << x.ten;
        cout << "\nDia chi nha san xuat: " << x.diachi;
        cout << "\nDon gia: " << dongia;
    }
};

class TIVI : public HANG
{
private:
    float kichthuoc;
    DATE ngaynhap;
public:
    TIVI()
    {
        this->kichthuoc = 0;
    }
    void NHAP()
    {
        HANG::NHAP();
        cout << "\nNhap kich thuoc: "; cin >> kichthuoc;
        cout << "\nNhap ngay nhap: "; cin >> ngaynhap.d;
        cout << "\nNhap thang nhap: "; cin >> ngaynhap.m;
        cout << "\nNhap nam nhap: "; cin >> ngaynhap.y;
    }
    void XUAT()
    {
        HANG::XUAT();
        cout << "\nKich thuoc: " << kichthuoc;
        cout << "\nNgay nhap: " << ngaynhap.d << "/" << ngaynhap.m << "/" << ngaynhap.y;
    }
};

int main()
{
    TIVI a;
    cout << "NHAP THONG TIN TIVI";
    a.NHAP();
    cout << "\nTHONG TIN TIVI";
    a.XUAT();
    return 0;
}

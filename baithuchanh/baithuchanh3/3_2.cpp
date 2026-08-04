#include <bits/stdc++.h>
using namespace std;

class HANG;

class NSX
{
private:
    char ma[15], ten[50], diachi[100];
    friend class HANG;
};

class HANG
{
private:
    char ma[15], ten[50];
    float dongia, trongluong;
    NSX x;
public:
    void NHAP()
    {
        cout << "\nNhap ma hang: "; fflush(stdin); gets(ma);
        cout << "\nNhap ten hang: "; fflush(stdin); gets(ten);
        cout << "\nNhap don gia: "; cin >> dongia;
        cout << "\nNhap trong luong: "; cin >> trongluong;
        cout << "\nNhap ma nha san xuat: "; fflush(stdin); gets(x.ma);
        cout << "\nNhap ten nha san xuat: "; fflush(stdin); gets(x.ten);
        cout << "\nNhap dia chi nha san xuat: "; fflush(stdin); gets(x.diachi);
    }
    void XUAT()
    {
        cout << "\nMa hang: " << ma;
        cout << "\nTen hang: " << ten;
        cout << "\nDon gia: " << dongia;
        cout << "\nTrong luong: " << trongluong;
        cout << "\nMa nha san xuat: " << x.ma;
        cout << "\nTen nha san xuat: " << x.ten;
        cout << "\nDia chi nha san xuat: " << x.diachi;
    }
};

int main()
{
    HANG a;
    cout << "\nNHAP THONG TIN MAT HANG";
    a.NHAP();
    cout << "\nTHONG TIN MAT HANG";
    a.XUAT();
    return 0;
}

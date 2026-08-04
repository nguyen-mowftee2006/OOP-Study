#include <bits/stdc++.h>
using namespace std;

class NSX
{
private:
    char ma[15], ten[50], diachi[100];
public:
    void NHAP()
    {
        cout << "\nNhap ma nha san xuat: "; fflush(stdin); gets(ma);
        cout << "\nNhap ten nha san xuat: "; fflush(stdin); gets(ten);
        cout << "\nNhap dia chi: "; fflush(stdin); gets(diachi);
    }
    void XUAT()
    {
        cout << "\nMa nha san xuat: " << ma;
        cout << "\nTen nha san xuat: " << ten;
        cout << "\nDia chi: " << diachi;
    }
};

class HANG
{
private:
    char ma[15], ten[50];
    NSX x;
public:
    void NHAP()
    {
        cout << "\nNhap ma hang: "; fflush(stdin); gets(ma);
        cout << "\nNhap ten hang: "; fflush(stdin); gets(ten);
        cout << "\nNHAP THONG TIN NHA SAN XUAT";
        x.NHAP();
    }
    void XUAT()
    {
        cout << "\nMa hang: " << ma;
        cout << "\nTen hang: " << ten;
        cout << "\nTHONG TIN NHA SAN XUAT";
        x.XUAT();
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

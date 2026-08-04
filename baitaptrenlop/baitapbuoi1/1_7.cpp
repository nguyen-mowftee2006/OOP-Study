#include <bits/stdc++.h>
using namespace std;

class CANBO
{
private:
    char ma[15], hoten[50], ngaysinh[20];
    int songaylam;
public:
    void NHAP()
    {
        cout << "\nNhap ma can bo: "; fflush(stdin); gets(ma);
        cout << "\nNhap ho ten: "; fflush(stdin); gets(hoten);
        cout << "\nNhap ngay sinh: "; fflush(stdin); gets(ngaysinh);
        cout << "\nNhap so ngay lam viec: "; cin >> songaylam;
    }
    long TINHLUONG() { return (long)songaylam * 250000; }
    void XUAT()
    {
        cout << "\nMa can bo: " << ma;
        cout << "\nHo ten: " << hoten;
        cout << "\nNgay sinh: " << ngaysinh;
        cout << "\nSo ngay lam viec: " << songaylam;
    }
};

int main()
{
    CANBO a;
    cout << "\nNHAP THONG TIN CAN BO";
    a.NHAP();
    cout << "\nTHONG TIN CAN BO";
    a.XUAT();
    cout << "\nLuong can bo: " << a.TINHLUONG();
    return 0;
}

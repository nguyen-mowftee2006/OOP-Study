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

class XEHOI
{
private:
    char hangsx[50];
    DATE namsx;
    float giaban;
    int soluongban;
public:
    void NHAP()
    {
        cout << "Nhap hang san xuat: "; fflush(stdin); gets(hangsx);
        cout << "\nNHAP NAM SAN XUAT";
        namsx.NHAP();
        cout << "\nNhap gia ban: "; cin >> giaban;
        cout << "\nNhap so luong ban: "; cin >> soluongban;
    }
    void XUAT()
    {
        cout << "\nHang san xuat: " << hangsx;
        cout << "\nNam san xuat: "; namsx.XUAT();
        cout << "\nGia ban: " << giaban;
        cout << "\nSo luong ban: " << soluongban;
    }
};

int main()
{
    XEHOI x;
    cout << "NHAP THONG TIN XE HOI";
    x.NHAP();
    cout << "\nTHONG TIN XE HOI";
    x.XUAT();
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

class SINHVIEN
{
private:
    char ma[20], hoten[50];
    int tuoi;
    float diem;
public:
    void NHAP()
    {
        cout << "\nNhap ma sinh vien: "; fflush(stdin); gets(ma);
        cout << "\nNhap ho ten: "; fflush(stdin); gets(hoten);
        cout << "\nNhap tuoi: "; cin >> tuoi;
        cout << "\nNhap diem: "; cin >> diem;
    }
    void XUAT()
    {
        cout << "\nMa sinh vien: " << ma;
        cout << "\nHo ten: " << hoten;
        cout << "\nTuoi: " << tuoi;
        cout << "\nDiem: " << diem;
    }
};

int main()
{
    SINHVIEN a, b;
    cout << "NHAP THONG TIN SINH VIEN A";
    a.NHAP();
    cout << "\nNHAP THONG TIN SINH VIEN B";
    b.NHAP();
    cout << "\nTHONG TIN SINH VIEN A";
    a.XUAT();
    cout << "\nTHONG TIN SINH VIEN B";
    b.XUAT();
    return 0;
}

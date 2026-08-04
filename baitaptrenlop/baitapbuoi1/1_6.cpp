#include <bits/stdc++.h>
using namespace std;

class HOCSINH
{
private:
    char hoten[50], gioitinh[10], xeploai[30];
    int ngay, thang, nam;
    float diemtb;
public:
    void NHAP()
    {
        cout << "\nNhap ho ten: "; fflush(stdin); gets(hoten);
        cout << "\nNhap ngay sinh: "; cin >> ngay;
        cout << "\nNhap thang sinh: "; cin >> thang;
        cout << "\nNhap nam sinh: "; cin >> nam;
        cout << "\nNhap gioi tinh: "; fflush(stdin); gets(gioitinh);
        cout << "\nNhap diem trung binh: "; cin >> diemtb;
        cout << "\nNhap xep loai dao duc: "; fflush(stdin); gets(xeploai);
    }
    void XUAT()
    {
        cout << "\nHo ten: " << hoten;
        cout << "\nNgay sinh: " << ngay << "/" << thang << "/" << nam;
        cout << "\nGioi tinh: " << gioitinh;
        cout << "\nDiem trung binh: " << diemtb;
        cout << "\nXep loai dao duc: " << xeploai;
    }
};

int main()
{
    HOCSINH a;
    cout << "\nNHAP THONG TIN HOC SINH";
    a.NHAP();
    cout << "\nTHONG TIN HOC SINH";
    a.XUAT();
    return 0;
}

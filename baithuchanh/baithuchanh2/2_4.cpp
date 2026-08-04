#include <bits/stdc++.h>
using namespace std;

class MAY
{
private:
    char ma[15], kieu[50], tinhtrang[50];
public:
    void NHAP()
    {
        cout << "\nNhap ma may: "; fflush(stdin); gets(ma);
        cout << "\nNhap kieu may: "; fflush(stdin); gets(kieu);
        cout << "\nNhap tinh trang: "; fflush(stdin); gets(tinhtrang);
    }
    void XUAT()
    {
        cout << "\n" << setw(15) << ma << setw(30) << kieu << setw(30) << tinhtrang;
    }
};

class QUANLY
{
private:
    char ma[15], hoten[50];
public:
    void NHAP()
    {
        cout << "\nNhap ma quan ly: "; fflush(stdin); gets(ma);
        cout << "\nNhap ho ten quan ly: "; fflush(stdin); gets(hoten);
    }
    void XUAT()
    {
        cout << "\nMa quan ly: " << ma;
        cout << "\nHo ten quan ly: " << hoten;
    }
};

class PHONGMAY
{
private:
    char ma[15], ten[50];
    float dientich;
    QUANLY x;
    MAY *y;
    int n;
public:
    void NHAP()
    {
        cout << "\nNhap ma phong: "; fflush(stdin); gets(ma);
        cout << "\nNhap ten phong: "; fflush(stdin); gets(ten);
        cout << "\nNhap dien tich: "; cin >> dientich;
        cout << "\nNHAP THONG TIN QUAN LY";
        x.NHAP();
        do
        {
            cout << "\nNhap so may tinh: "; cin >> n;
        } while (n <= 0);
        y = new MAY[n];
        for (int i = 0; i < n; i++)
        {
            cout << "\nNhap may tinh thu " << i + 1 << ":";
            y[i].NHAP();
        }
    }
    void XUAT()
    {
        cout << left;
        cout << "\n" << setw(25) << "" << "THONG TIN PHONG MAY";
        cout << "\nMa phong: " << setw(25) << ma << "Ten phong: " << ten;
        cout << "\nDien tich: " << dientich;
        cout << "\nTHONG TIN QUAN LY";
        x.XUAT();
        cout << "\nDANH SACH MAY TINH";
        cout << "\n" << setw(15) << "Ma may" << setw(30) << "Kieu may" << setw(30) << "Tinh trang";
        for (int i = 0; i < n; i++)
            y[i].XUAT();
    }
};

int main()
{
    PHONGMAY p;
    cout << "\nNHAP THONG TIN PHONG MAY";
    p.NHAP();
    p.XUAT();
    return 0;
}

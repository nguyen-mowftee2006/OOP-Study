#include <bits/stdc++.h>
using namespace std;

class TAISAN
{
private:
    char ten[50], tinhtrang[100];
    int soluong;
public:
    void NHAP()
    {
        cout << "\nNhap ten tai san: "; fflush(stdin); gets(ten);
        cout << "\nNhap so luong: "; cin >> soluong;
        cout << "\nNhap tinh trang: "; fflush(stdin); gets(tinhtrang);
    }
    void XUAT()
    {
        cout << "\n" << setw(30) << ten << setw(15) << soluong << setw(40) << tinhtrang;
    }
    friend class PHIEU;
};

class PHIEU
{
private:
    char ma[15], ngaykiemke[20], nhanvien[50], chucvu[50];
    char phong[50], maphong[15], truongphong[50];
    TAISAN x[100];
    int n;
public:
    void NHAP()
    {
        cout << "\nNhap ma phieu: "; fflush(stdin); gets(ma);
        cout << "\nNhap ngay kiem ke: "; fflush(stdin); gets(ngaykiemke);
        cout << "\nNhap nhan vien kiem ke: "; fflush(stdin); gets(nhanvien);
        cout << "\nNhap chuc vu: "; fflush(stdin); gets(chucvu);
        cout << "\nNhap phong kiem ke: "; fflush(stdin); gets(phong);
        cout << "\nNhap ma phong: "; fflush(stdin); gets(maphong);
        cout << "\nNhap truong phong: "; fflush(stdin); gets(truongphong);
        do
        {
            cout << "\nNhap so tai san: "; cin >> n;
        } while (n <= 0 || n > 100);
        for (int i = 0; i < n; i++)
        {
            cout << "\nNhap tai san thu " << i + 1 << ":";
            x[i].NHAP();
        }
    }
    void XUAT()
    {
        cout << left;
        cout << "\n" << setw(25) << "" << "PHIEU KIEM KE TAI SAN";
        cout << "\nMa phieu: " << setw(30) << ma << "Ngay kiem ke: " << ngaykiemke;
        cout << "\nNhan vien kiem ke: " << setw(21) << nhanvien << "Chuc vu: " << chucvu;
        cout << "\nKiem ke tai phong: " << setw(21) << phong << "Ma phong: " << maphong;
        cout << "\nTruong phong: " << truongphong;
        cout << "\n" << setw(30) << "Ten tai san" << setw(15) << "So luong" << setw(40) << "Tinh trang";
        int tong = 0;
        for (int i = 0; i < n; i++)
        {
            x[i].XUAT();
            tong += x[i].soluong;
        }
        cout << "\nSo tai san da kiem ke: " << setw(20) << n << "Tong so luong: " << tong;
    }
    void SUA()
    {
        for (int i = 0; i < n; i++)
            if (strcmp(x[i].ten, "May vi tinh") == 0)
                x[i].soluong = 20;
    }
    void SAPXEP()
    {
        TAISAN tg;
        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
                if (x[i].soluong > x[j].soluong)
                {
                    tg = x[i]; x[i] = x[j]; x[j] = tg;
                }
    }
};

int main()
{
    PHIEU p;
    cout << "\nNHAP THONG TIN PHIEU";
    p.NHAP();
    p.XUAT();
    p.SUA();
    p.SAPXEP();
    cout << "\nPHIEU SAU KHI SUA VA SAP XEP";
    p.XUAT();
    return 0;
}

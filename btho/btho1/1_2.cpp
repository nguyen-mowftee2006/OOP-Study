#include <bits/stdc++.h>
using namespace std;

class MONHOC
{
private:
    char ten[50];
    int sotrinh;
    float diem;
public:
    void NHAP()
    {
        cout << "\nNhap ten mon: "; fflush(stdin); gets(ten);
        cout << "\nNhap so trinh: "; cin >> sotrinh;
        cout << "\nNhap diem: "; cin >> diem;
    }
    void XUAT()
    {
        cout << "\n" << setw(35) << ten << setw(15) << sotrinh << setw(15) << diem;
    }
    friend class PHIEU;
};

class PHIEU
{
private:
    char masv[15], tensv[50], lop[20];
    int khoa, n;
    MONHOC x[100];
public:
    void NHAP()
    {
        cout << "\nNhap ma sinh vien: "; fflush(stdin); gets(masv);
        cout << "\nNhap ten sinh vien: "; fflush(stdin); gets(tensv);
        cout << "\nNhap lop: "; fflush(stdin); gets(lop);
        cout << "\nNhap khoa: "; cin >> khoa;
        do
        {
            cout << "\nNhap so mon hoc: "; cin >> n;
        } while (n <= 0 || n >= 100);
        for (int i = 0; i < n; i++)
        {
            cout << "\nNhap mon hoc thu " << i + 1 << ":";
            x[i].NHAP();
        }
    }
    void XUAT()
    {
        cout << left << fixed << setprecision(2);
        cout << "\n" << setw(30) << "" << "PHIEU BAO DIEM";
        cout << "\nMa sinh vien: " << setw(25) << masv << "Ten sinh vien: " << tensv;
        cout << "\nLop: " << setw(34) << lop << "Khoa: " << khoa;
        cout << "\nBANG DIEM";
        cout << "\n" << setw(35) << "Ten mon" << setw(15) << "So trinh" << setw(15) << "Diem";
        float tong = 0;
        int tongtrinh = 0;
        for (int i = 0; i < n; i++)
        {
            x[i].XUAT();
            tong += x[i].sotrinh * x[i].diem;
            tongtrinh += x[i].sotrinh;
        }
        cout << "\n" << setw(35) << "" << setw(15) << "Diem trung binh" << tong / tongtrinh;
    }
    void MONLONHON3()
    {
        cout << "\nCAC MON HOC CO SO TRINH LON HON 3";
        for (int i = 0; i < n; i++)
            if (x[i].sotrinh > 3)
                cout << "\n" << x[i].ten;
    }
    void CHEN()
    {
        int vt;
        do
        {
            cout << "\nNhap vi tri chen: "; cin >> vt;
        } while (vt < 1 || vt > n + 1);
        for (int i = n; i >= vt; i--)
            x[i] = x[i - 1];
        cout << "\nNhap mon hoc can chen:";
        x[vt - 1].NHAP();
        n++;
    }
};

int main()
{
    PHIEU p;
    cout << "\nNHAP THONG TIN PHIEU";
    p.NHAP();
    p.XUAT();
    p.MONLONHON3();
    p.CHEN();
    cout << "\nPHIEU SAU KHI CHEN MON HOC";
    p.XUAT();
    return 0;
}

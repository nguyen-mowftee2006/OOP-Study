#include <bits/stdc++.h>
using namespace std;

class NHACUNGCAP
{
private:
    char ma[15], ten[50], diachi[100], sdt[20];
public:
    void NHAP()
    {
        cout << "\nNhap ma nha cung cap: "; fflush(stdin); gets(ma);
        cout << "\nNhap ten nha cung cap: "; fflush(stdin); gets(ten);
        cout << "\nNhap dia chi: "; fflush(stdin); gets(diachi);
        cout << "\nNhap so dien thoai: "; fflush(stdin); gets(sdt);
    }
    friend class PHIEUNHAP;
};

class SANPHAM
{
private:
    char ma[15], ten[50];
    int soluong;
    float dongia;
public:
    void NHAP()
    {
        cout << "\nNhap ma san pham: "; fflush(stdin); gets(ma);
        cout << "\nNhap ten san pham: "; fflush(stdin); gets(ten);
        cout << "\nNhap so luong: "; cin >> soluong;
        cout << "\nNhap don gia: "; cin >> dongia;
    }
    void XUAT()
    {
        cout << "\n" << setw(15) << ma << setw(25) << ten << setw(15) << soluong << setw(15) << dongia << setw(18) << soluong * dongia;
    }
    friend class PHIEUNHAP;
};

class PHIEUNHAP
{
private:
    char ma[15], ngaylap[20];
    NHACUNGCAP ncc;
    SANPHAM x[100];
    int n;
public:
    void NHAP()
    {
        cout << "\nNhap ma phieu: "; fflush(stdin); gets(ma);
        cout << "\nNhap ngay lap: "; fflush(stdin); gets(ngaylap);
        cout << "\nNHAP THONG TIN NHA CUNG CAP";
        ncc.NHAP();
        do
        {
            cout << "\nNhap so san pham: "; cin >> n;
        } while (n <= 0 || n > 100);
        for (int i = 0; i < n; i++)
        {
            cout << "\nNhap san pham thu " << i + 1 << ":";
            x[i].NHAP();
        }
    }
    void XUAT()
    {
        cout << left << fixed << setprecision(2);
        cout << "\nDAI HOC VICTORY";
        cout << "\n" << setw(32) << "" << "PHIEU NHAP VAN PHONG PHAM";
        cout << "\nMa phieu: " << setw(29) << ma << "Ngay lap: " << ngaylap;
        cout << "\nMa nha cung cap: " << setw(20) << ncc.ma << "Ten nha cung cap: " << ncc.ten;
        cout << "\nDia chi: " << setw(31) << ncc.diachi << "SDT: " << ncc.sdt;
        cout << "\n" << setw(15) << "Ma SP" << setw(25) << "Ten san pham" << setw(15) << "So luong" << setw(15) << "Don gia" << setw(18) << "Thanh tien";
        float tong = 0;
        for (int i = 0; i < n; i++)
        {
            x[i].XUAT();
            tong += x[i].soluong * x[i].dongia;
        }
        cout << "\n" << setw(55) << "" << setw(15) << "TONG" << setw(18) << tong;
        cout << "\n" << setw(30) << "Hieu truong" << setw(30) << "Phong tai chinh" << "Nguoi lap";
    }
    int DEM()
    {
        int dem = 0;
        for (int i = 0; i < n; i++)
            if (x[i].soluong < 80)
                dem++;
        return dem;
    }
    void SAPXEP()
    {
        SANPHAM tg;
        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
                if (x[i].dongia > x[j].dongia)
                {
                    tg = x[i]; x[i] = x[j]; x[j] = tg;
                }
    }
};

int main()
{
    PHIEUNHAP p;
    cout << "\nNHAP THONG TIN PHIEU";
    p.NHAP();
    cout << "\nPHIEU VUA NHAP";
    p.XUAT();
    cout << "\nSo san pham co so luong nho hon 80: " << p.DEM();
    p.SAPXEP();
    cout << "\nPHIEU SAU KHI SAP XEP TANG DAN THEO DON GIA";
    p.XUAT();
    return 0;
}

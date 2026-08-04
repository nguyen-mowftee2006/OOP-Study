#include <bits/stdc++.h>
using namespace std;

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
        cout << "\n" << setw(15) << ma << setw(30) << ten << setw(15) << soluong << setw(15) << dongia << setw(18) << soluong * dongia;
    }
    friend class PHIEU;
};

class PHIEU
{
private:
    char ma[15], ngaylap[20], mancc[15], tenncc[50], diachi[100], sdt[20];
    SANPHAM x[20];
    int n;
public:
    void NHAP()
    {
        cout << "Nhap ma phieu: "; fflush(stdin); gets(ma);
        cout << "\nNhap ngay lap: "; fflush(stdin); gets(ngaylap);
        cout << "\nNhap ma nha cung cap: "; fflush(stdin); gets(mancc);
        cout << "\nNhap ten nha cung cap: "; fflush(stdin); gets(tenncc);
        cout << "\nNhap dia chi: "; fflush(stdin); gets(diachi);
        cout << "\nNhap so dien thoai: "; fflush(stdin); gets(sdt);
        do
        {
            cout << "\nNhap so san pham: "; cin >> n;
        } while (n <= 0 || n >= 20);
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
        cout << "\n" << setw(30) << "" << "PHIEU NHAP VAN PHONG PHAM";
        cout << "\nMa phieu: " << setw(30) << ma << "Ngay lap: " << ngaylap;
        cout << "\nMa nha cung cap: " << setw(21) << mancc << "Ten nha cung cap: " << tenncc;
        cout << "\nDia chi: " << setw(33) << diachi << "SDT: " << sdt;
        cout << "\n" << setw(15) << "Ma SP" << setw(30) << "Ten san pham" << setw(15) << "So luong" << setw(15) << "Don gia" << setw(18) << "Thanh tien";
        float tong = 0;
        for (int i = 0; i < n; i++)
        {
            x[i].XUAT();
            tong += x[i].soluong * x[i].dongia;
        }
        cout << "\n" << setw(60) << "TONG" << setw(15) << "" << setw(18) << tong;
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
                if (x[i].dongia < x[j].dongia)
                {
                    tg = x[i]; x[i] = x[j]; x[j] = tg;
                }
    }
    void SUA() { strcpy(tenncc, "Cong ty TNHH Thanh Do"); }
};

int main()
{
    PHIEU p;
    cout << "NHAP THONG TIN PHIEU";
    p.NHAP();
    p.XUAT();
    cout << "\nSo san pham co so luong nho hon 80: " << p.DEM();
    p.SAPXEP();
    cout << "\nPHIEU SAU KHI SAP XEP GIAM DAN THEO DON GIA";
    p.XUAT();
    p.SUA();
    cout << "\nPHIEU SAU KHI SUA TEN NHA CUNG CAP";
    p.XUAT();
    return 0;
}
